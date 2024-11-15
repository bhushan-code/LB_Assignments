//Q-5 Accept N numbers from user and return product of all odd numbers.
//Input   :     N : 6 
//              Elements : 15  66  3   76  93  88
//Output  :     45


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Product
// Description    : Return product of all odd numbers.
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 13/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Product(int Arr[], int iLength)
{
    int iPro = 1;
    int iCnt = 0;
    int AllEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)             
        {
            iPro = iPro * Arr[iCnt];
            AllEven = 1;
        }
    }
    if(AllEven == 0)
    {
        return 0;
    }
    else
    {
        return iPro;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return product of all odd numbers.
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

    iRet = Product(ptr, iSize);

    printf("Product is %d",iRet);

    free(ptr);

    return 0;
}