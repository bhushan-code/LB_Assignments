#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int CountWhite(char FName[])
{
    int fd = open(FName, O_RDONLY);
    if (fd == -1) {
        printf("Error opening file\n");
        return -1;
    }

    char Arr[1024];
    int whiteSpaceCount = 0;
    int value;

    while ((value = read(fd, Arr, sizeof(Arr))) > 0) {
        for (int i = 0; i < value; i++) {
            if (Arr[i] == ' ' || Arr[i] == '\t' || Arr[i] == '\n') {
                whiteSpaceCount++;
            }
        }
    }

    close(fd);
    return whiteSpaceCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    if (iRet != -1) {
        printf("Number of white spaces are %d\n", iRet);
    }

    return 0;
}
