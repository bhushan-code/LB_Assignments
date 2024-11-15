//Q-2 Accept N numbers from user and return the difference between frequency of even number adn odd numbers.
//Input   :     N : 7
//              Elements : 85  66  3   15  93  88   90
//Output  :     1(4-3)


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Frequency
// Description    : Return the diff between frequency of even number and odd numbers
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 12/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iCountEven = 0, iCountOdd = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)             
        {
           iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return the diff bet frequency of even number adn odd numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *ptr =NULL; 

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);
    printf("Result if %d : \n",iRet);

    free(ptr);

    return 0;
}