#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int CountChar(char FName[], char Ch)
{
    int fd = open(FName, O_RDONLY);
    if (fd == -1) {
        printf("Error opening file\n");
        return -1;
    }

    char Arr[1024];
    int count = 0;
    int value;

    while ((value = read(fd, Arr, sizeof(Arr))) > 0) {
        for (int i = 0; i < value; i++) {
            if (Arr[i] == Ch) {
                count++;
            }
        }
    }

    close(fd);
    return count;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);
    if (iRet != -1) {
        printf("Frequency is %d\n", iRet);
    }

    return 0;
}
