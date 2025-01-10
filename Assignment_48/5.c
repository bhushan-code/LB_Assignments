#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void DisplayN(char FName[], int iSize)
{
    int fd = open(FName, O_RDONLY);
    if (fd == -1) {
        printf("Error opening file: %s\n", FName);
        return;
    }

    char ptr[iSize + 1];
    int No = read(fd, ptr, iSize);
    if (No == -1) {
        printf("Error reading file: %s\n", FName);
        close(fd);
        return;
    }

    ptr[No] = '\0';
    printf("%s\n", ptr);

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters to read: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
