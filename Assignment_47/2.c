#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    int fd = 0;
    char FName[30];

    printf("Enter the file name that you want to create :\n");
    scanf("%[^'\n']s", FName);

    fd = creat(FName, 0777);    

    if(fd == -1)
    {
        printf("Unable to create file\n");
    } 
    else
    {
        printf("File created successfully with FD %d\n",fd);
    }
    return 0;
}