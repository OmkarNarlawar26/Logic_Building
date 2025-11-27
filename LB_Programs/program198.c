#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main()
{
    unlink("PPA.txt");          // It deletes the txt file that was created in current directory

    return 0;
}