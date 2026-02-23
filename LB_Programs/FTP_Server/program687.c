// Client Application

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/socket.h>
#include<sys/stat.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdbool.h>

int ReadLine(int Sock, char *line, int max)
{
    int i = 0;
    char ch = '\0';
    int n = 0;

    while(i < max - 1)
    {
        n = read(Sock, &ch, 1);

        if(n <= 0) { break; }

        line[i++] = ch;

        if(ch == '\n') { break; }
    }   // end of while

    line[i] = '\0';

    return i;
} // End of ReadLine

//////////////////////////////////////////////////////////////////////////
//
//  Commandline Argument Application
//  1st Argument : IP address
//  2nd Argument : Port Number
//  3rd Argument : Targated File name
//  4th Argument : New File Name
//
//  ./client     127.0.0.1   9000    Demo.txt   A.txt
//  arge[0]      arge[1]     arge[2] arge[3]    arge[4]
// 
//  argc = 5
//  
//////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
    int Port = 0;                   // arge[2]
    int Sock = 0;
    int iRet = 0;

    char *ip = NULL;                // argv[1]
    char *Filename = NULL;          // argv[3]
    char *OutFilename = NULL;       // argv[4]

    struct sockaddr_in ServerAddr;

    char Header[64] = {'\0'};

    if((argc < 5) || (argc > 5))
    {
        printf("Unable to proceed as invalid number of arguments\n");

        printf("Please provide below arguments : \n");

        printf("1st Argument : IP address\n");
        printf("2nd Argument : Port Number");
        printf("3rd Argument : Targated File name\n");
        printf("4th Argument : New File Name\n");

        return -1;
    }

    // Store command line arguments into the variables
    ip = argv[1];
    Port = atoi(argv[2]);
    Filename = argv[3];
    OutFilename = argv[4];

    //////////////////////////////////////////////////////////////////////
    // Step 1 : Create TCP socket
    //////////////////////////////////////////////////////////////////////

    Sock = socket(AF_INET, SOCK_STREAM, 0);

    if(Sock < 0)
    {
        printf("Unable to create the client socket\n");
        return -1;
    }

    //////////////////////////////////////////////////////////////////////
    // Step 2 : Connect with server
    //////////////////////////////////////////////////////////////////////

    memset(&ServerAddr, 0, sizeof(ServerAddr));
    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_port = htons(Port);

    // Convert the IP address into Binary format
    inet_pton(AF_INET, ip, &ServerAddr.sin_addr);

    iRet = connect(Sock, (struct sockaddr *) &ServerAddr, sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Unable to connect with server\n");

        close(Sock);

        return -1;
    }

    //////////////////////////////////////////////////////////////////////
    // Step 3 : Send file Name
    //////////////////////////////////////////////////////////////////////

    // sending file name to server
    write(Sock, Filename, strlen(Filename));
    write(Sock,"\n",1);

    //////////////////////////////////////////////////////////////////////
    // Step 4 : Read the header
    //////////////////////////////////////////////////////////////////////
    
    iRet = ReadLine(Sock, Header, sizeof(Header));

    if(iRet <= 0)
    {
        printf("Server gets disconnected abnormally\n");
        close(Sock);
        return -1;
    }

    long FileSize = 0;

    printf("Header is : %s\n",Header);

    sscanf(Header, "OK %ld", &FileSize);
    printf("File Size is : %ld\n", FileSize);

    //////////////////////////////////////////////////////////////////////
    // Step 2 : Create new File
    //////////////////////////////////////////////////////////////////////

    int outfd = 0;

    outfd = open(OutFilename, O_CREAT | O_WRONLY | O_TRUNC, 0777);

    if(outfd < 0)
    {
        printf("Unable to create Downloaded file\n");

        return -1;
    }

    char Buffer[1024] = {'\0'};
    long received = 0;
    long remaining = 0;
    int n = 0;
    int toRead = 0;

    while(received < FileSize)
    {
        remaining = FileSize - received;

        if(remaining > 1024)
        {
            toRead = 1024;
        }
        else
        {
            toRead = remaining;
        }

        n = read(Sock, Buffer, toRead);

        write(outfd, Buffer, n);

        received = received + n;
    }   // End of While

    close(outfd);
    close(Sock);

    if(received == FileSize)
    {
        printf("Download complete...\n");
        return 0;
    }
    else
    {
        printf("Download Failed...\n");
        return -1;
    }

    return 0;
}   // End of main