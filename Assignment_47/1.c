#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    int fd = 0;
    char FName[30];

    printf("Enter the file name that you want to open :\n");
    scanf("%[^'\n']s", FName);

    fd = open(FName, O_RDONLY);    

    if(fd == -1)
    {
        printf("Unable to open file\n");
    } 
    else
    {
        printf("File open successfully with FD %d\n",fd);
    }
    return 0;
}