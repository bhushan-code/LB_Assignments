//Q-1 Accept N numbers from user and return the frequency of even numbers.
//Input   :     N : 6 
//              Elements : 85  66  3   80  93  88
//Output  :     3


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountEven
// Description    : Return the frequency of even numbers.
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 12/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountEven(int Arr[], int iLength)
{
    int iCount = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)             
        {
           iCount++;
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return the frequency of even numbers.
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

    iRet = CountEven(ptr, iSize);
    printf("Result if %d : \n",iRet);

    free(ptr);

    return 0;
}