#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    int fd = 0;
    char Name[30];
    char Data[50];

    printf("Enter the file name that you want to open :\n");
    scanf("%[^'\n']s", Name);

    printf("Enter the data you want to enter in file : \n");
    scanf(" %[^'\n']s", Data);

    fd = open(Name, O_RDWR);    

    if(fd == -1)
    {
        printf("Unable to open file\n");
    } 
    else
    {
        printf("File open successfully with FD %d\n",fd);

        write(fd, Data, 10);

        close(fd);
    }
    return 0;
}