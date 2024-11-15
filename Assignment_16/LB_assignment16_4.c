//Q-4 Accept N numbers from user and display all such numbers which contains 3 digits in it.
//Input   :     N : 6 
//              Elements : 8225  665  3   76  953  858
//Output  :     665 953 858


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Digits
// Description    : Display all such numbers which contains 3 digits in it.
// Input          : Pointer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 14/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Digits(int Arr[], int iLength)
{
    int iNo = 0, iCnt = 0, iDigits = 0;
    for(iCnt= 0;iCnt<iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iDigits = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iNo = iNo / 10;
            iDigits++;
        }

        if(iDigits == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return all such numbers which contains 3 digits in it.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    Digits(ptr, iSize);

    free(ptr);

    return 0;
}