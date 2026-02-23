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
    PINODE ptrinode;
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
    PFILETABLE UFDT[MAXOPENFILES];
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
//  Entry Point Function of the Project
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    StartAuxillaryDataInitialisation();

    return 0;
}