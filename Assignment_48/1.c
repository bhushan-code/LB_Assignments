#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int CountSmall(char FName[])
{
    int fd = open(FName, O_RDONLY);
    if (fd == -1) {
        printf("Error opening file\n");
        return -1;
    }

    char Arr[1024];
    int smallCount = 0;
    int value;

    while ((value = read(fd, Arr, sizeof(Arr))) > 0) {
        for (int i = 0; i < value; i++) {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') {
                smallCount++;
            }
        }
    }

    close(fd);
    return smallCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    if (iRet != -1) {
        printf("Number of small characters are %d\n", iRet);
    }

    return 0;
}
