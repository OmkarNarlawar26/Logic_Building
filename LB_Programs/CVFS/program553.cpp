//////////////////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////////////////////////////////

//  Maximum file size that we allow in the project
#define MAXFILESIZE 50

#define MAXOPENFILES 20

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

//////////////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros For Error Handling
//
//////////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////////////////////////////////
//
//  User Defined Structures
//
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :            BootBlock
//  Description  :              Holds the information to boot the OS
//
//////////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

//////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :            SuperBlock
//  Description  :              Holds the information about the File System
//
//////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

//////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :            Inode
//  Description  :              Holds the information about File
//
//////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer;           // Actual File allocation Address
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :            FileTable
//  Description  :              Holds the information about Opened File
//
//////////////////////////////////////////////////////////////////////////////////

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;                // Pointer created for Inode
};

typedef FileTable FILETABLE;
typedef FileTable * PFILETABLE;

//////////////////////////////////////////////////////////////////////////////////
//
//  Structure Name :            UAREA
//  Description  :              Holds the information about Process
//
//////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];      // FileTable *  UFDT is Array and MAXOPENFILES is size(for Ex : 30)
};

//////////////////////////////////////////////////////////////////////////////////
//
//  Global variables or objects used in the Project
//
//////////////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;

PINODE head = NULL;

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         InitialiseUAREA
//  Description :           It is used to initialise UAREA members
//  Author :                Omkar Sachin Narlawar
//  Date :                  13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialised successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         InitialiseSuperBlock
//  Description :           It is used to initialise Super block members
//  Author :                Omkar Sachin Naralwar
//  Date :                  13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super block gets initialised successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         CreateDILB
//  Description :           It is used to create LinkedList of inodes
//  Author :                Omkar Sachin Naralwar
//  Date :                  13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn->FileName,"\0");
        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)            // LL is Empty
        {
            head = newn;
            temp = head;
        }
        else                        // LL contains atleast one node
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB created successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         StartAuxillaryDataInitialisation
//  Description :           It is used to call all such functions which are 
//                          used to initialise auxillary data
//  Author :                Omkar Sachin Naralwar
//  Date :                  13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is done");

    printf("%s\n",bootobj.Information);

    InitialiseSuperBlock();

    CreateDILB();

    InitialiseUAREA();

    printf("Marvellous CVFS : Auxillary data initialise successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         DisplayHelp
//  Description :           It is used to display the help page
//  Author :                Omkar Sachin Naralwar
//  Date :                  14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("--------------------------------------------------------------------\n");
    printf("---------------------Marvellous CVFS Help Page----------------------\n");
    printf("--------------------------------------------------------------------\n");
    printf("\n");
    
    printf("man     : It is used to display manual page\n");
    printf("clear   : It is used to clear the terminal\n");
    printf("Creat   : It is used to create new file\n");
    printf("write   : It is used to write the data into file\n");
    printf("read    : It is used to read the data from the file\n");
    printf("stat    : It is used to display statistical information\n");
    printf("unlink  : It is used to delete the file\n");
    printf("exit    : It is use to terminate Marvellous CVFS\n");
    
    printf("\n");
    printf("--------------------------------------------------------------------\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         ManPageDisplay
//  Description :           It is used to display the man page
//  Author :                Omkar Sachin Naralwar
//  Date :                  14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp("ls",Name) == 0)
    {
        printf("About        : It is used to list the names of all files\n");
        printf("Usage        : ls\n");
    }
    else if(strcmp("man",Name) == 0)
    {
        printf("About        : It is used to Display manual page\n");
        printf("Usage        : man command_name\n");
        printf("command_name : Is it the name of command\n");
    }
    else if(strcmp("exit",Name) == 0)
    {
        printf("About        : It is used to terminate the shell\n");
        printf("Usage        : exit\n");
    }
    else if(strcmp("clear",Name) == 0)
    {
        printf("About        : It is used to clear the shell\n");
        printf("Usage        : clear\n");
    }
    else if(strcmp("creat",Name) == 0)
    {
        printf("About        : It is used to create the new file\n");
        printf("Usage        : creat\n");
    }
    else if(strcmp("unlink",Name) == 0)
    {
        printf("About        : It is used to delete the file\n");
        printf("Usage        : unlink\n");
    }
    else
    {
        printf("No manual entry for %s\n",Name);
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         IsFileExist
//  Description :           It is used to check whether file is already exist or not
//  Input :                 It accepts file name
//  Output :                It returns the true or false (boolean)
//  Author :                Omkar Sachin Naralwar
//  Date :                  16/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

bool IsFileExist(
                    char *name            //  File name
                )
{
    PINODE temp = head;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((strcmp(name,temp->FileName) == 0) && (temp->FileType == REGULARFILE))
        {
            bFlag = true;
            break;
        }
        temp = temp->next;
    }

    return bFlag;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         CreateFile
//  Description :           It is used to create new regular file
//  Input :                 It accepts file name and permission
//  Output :                It returns the file descriptor
//  Author :                Omkar Sachin Naralwar
//  Date :                  16/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

int CreateFile(
                    char *name,             // Name of new file
                    int permission          // Permission for that file
                )
{
    PINODE temp = head;
    int i = 0;

    printf("Total number of Inodes remaining : %d\n",superobj.FreeInodes);

    //  If name is missing
    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    //  If the permission value is wrong
    //  permission -> 1 -> READ
    //  permission -> 2 -> WRITE
    //  permission -> 3 -> READ + WRITE
    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    //  If the inodes are full
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }

    //  If file is already present
    if(IsFileExist(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    //  Search empty Inode
    while(temp != NULL)
    {
        if(temp->FileType == 0)
        {
            break;
        }
        temp = temp->next;
    }

    if(temp == NULL)            //  If temp reached to last node
    {
        printf("There is no Inode");
        return ERR_NO_INODES;
    }

    //  Search for empty UDFT entry
    // Note : 0 1 2 are reserved
    for(i = 3; i < MAXOPENFILES ; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    //  UFDT is full
    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    //  Allocate memory for file table
    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    //  Initialise File Table
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = permission;

    //  Connect File Table with Inode
    uareaobj.UFDT[i]->ptrinode = temp;

    //  Initialise elements of Inode
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName,name);
    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;
    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;
    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;
    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 1;
    uareaobj.UFDT[i]->ptrinode->Permission = permission;

    //  Allocate memory for files data
    uareaobj.UFDT[i]->ptrinode->Buffer = (char *)malloc(MAXFILESIZE);

    superobj.FreeInodes--;

    return i;           // File descriptor
    
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         LsFile
//  Description :           It is used to list all files
//  Input :                 Nothing
//  Output :                Nothing
//  Author :                Omkar Sachin Naralwar
//  Date :                  16/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

//  ls -l
void LsFile()
{
    PINODE temp = head;

    printf("--------------------------------------------------------------------\n");
    printf("-----------------Marvellous CVFS Files Information------------------\n");
    
    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%d\t%s\t%d\n",temp->InodeNumber,temp->FileName,temp->ActualFileSize);
        }
        
        temp = temp->next;
    }

    printf("--------------------------------------------------------------------\n");
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         UnlinkFile()
//  Description :           It is used to delete the file
//  Input :                 File name
//  Output :                Nothing
//  Author :                Omkar Sachin Naralwar
//  Date :                  22/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

int UnlinkFile(
                    char *name
                )
{
    int i = 0;

    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExist(name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //  Travel the UDFT
    for(i = 0; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] != NULL)
        {
            if(strcmp(uareaobj.UFDT[i]->ptrinode->FileName, name) == 0)
            {
                //  Deallocate memory of Buffer
                free(uareaobj.UFDT[i]->ptrinode->Buffer);
                uareaobj.UFDT[i]->ptrinode->Buffer = NULL;

                // Reset all values of inode
                // Dont deallocate memory of inode
                uareaobj.UFDT[i]->ptrinode->FileSize = 0;
                uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;
                uareaobj.UFDT[i]->ptrinode->FileType = 0;
                uareaobj.UFDT[i]->ptrinode->ReferenceCount = 0;
                uareaobj.UFDT[i]->ptrinode->Permission = 0;

                memset(uareaobj.UFDT[i]->ptrinode->FileName, '\0', sizeof(uareaobj.UFDT[i]->ptrinode->FileName));

                //  Deallocate memory of file table
                free(uareaobj.UFDT[i]);

                //  Set NULL to UFDT
                uareaobj.UFDT[i] = NULL;

                //  Increment free inodes count
                superobj.FreeInodes++;

                break;      // break is of for loop (IMP)

            }   //  End of if
        }       //  End of if
    }           //  End of for

    return EXECUTE_SUCCESS;
}               //  End of Function

//////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the Project
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};
    int iCount = 0;
    int iRet = 0;

    StartAuxillaryDataInitialisation();

    printf("\n");
    printf("--------------------------------------------------------------------\n");
    printf("----------------Marvellous CVFS started Successfully----------------\n");
    printf("--------------------------------------------------------------------\n");

    // Infinite listening Shell
    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);

        fflush(stdin);

        if(iCount == 1)
        {
            //  Marvellous CVFS : > exit
            if(strcmp("exit",Command[0]) == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all the allocated resources\n");

                break;
            }

            //  Marvellous CVFS : > ls
            else if(strcmp("ls",Command[0]) == 0)
            {
                LsFile();
            }

            //  Marvellous CVFS : > help
            else if(strcmp("help",Command[0]) == 0)
            {
                DisplayHelp();
            }

            //  Marvellous CVFS : > clear
            else if(strcmp("clear",Command[0]) == 0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
            }
        }   // End of else if 1
        else if(iCount == 2)
        {
            //  Marvellous CVFS : > man ls
            if(strcmp("man",Command[0]) == 0)
            {
                ManPageDisplay(Command[1]);
            }

            //  Marvellous CVFS : > unlink Demo.txt
            if(strcmp("unlink",Command[0]) == 0)
            {
                iRet = UnlinkFile(Command[1]);

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameter");
                }

                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error :  Unable to delete as there is no such file");
                }

                if(iRet == EXECUTE_SUCCESS)
                {
                    printf("File gets successfully deleted\n");
                }
            }
        }   // End of else if 2
        else if(iCount == 3)
        {
            //  //  Marvellous CVFS : > creat Ganesh.txt 3
            if(strcmp("creat",Command[0]) == 0)
            {
                iRet = CreateFile(Command[1],atoi(Command[2]));     // atoi is ascii to integer 

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create the file as parameters are invalid\n");
                    printf("Please refer man page\n");
                }

                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file as there is no inode\n");
                }

                if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create file because the file is already present\n");
                }

                if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create file\n");
                    printf("Max opened files limit reached\n");
                }

                printf("File gets successfully created with FD %d\n",iRet);
            }
            else
            {
                printf("There is no such command");
            }
        }   // End of else if 3
        else if(iCount == 4)
        {

        }   // End of else if 4
        else
        {
            printf("Command not Found\n");
            printf("Please refer help option to get more information\n");
        }   // End of else 
    }   // End of While

    return 0;
}   // End of while