#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          // Uniform Standard
#include<fcntl.h>           // File Control

int main()
{
    int fd = 0;             // fd = File Descriptor

    fd = creat("LB.txt",0777);

    printf("FD is : %d\n",fd);
    
    return 0;
}