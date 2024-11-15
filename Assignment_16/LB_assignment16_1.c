//Q-1 Accept N numbers from user and return the largest number.
//Input   :     N : 6 
//              Elements : 85  66  3   15  93  88
//Output  :     93


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Largest
// Description    : Return the largest number.
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 14/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Largest(int Arr[], int iLength)
{
    int iLargest = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iLargest < Arr[iCnt])
        {
            iLargest = Arr[iCnt];
        }
    }
    return iLargest;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return the largest number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue = 0;
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

    iRet = Largest(ptr, iSize);

    printf("Largest number is : %d \n",iRet);

    free(ptr);

    return 0;
}