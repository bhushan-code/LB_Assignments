//Q-5 Accept N numbers from user and accept one anather numbers as no, return frequency of NO from it.
//Input   :     N : 6 
//              NO: 66
//              Elements : 66  66  3   15  93  88
//Output  :     2


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Frequency
// Description    : Return the frequency of 11 from it.
// Input          : Pointer, Integer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 12/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength, int iNo)
{
    int iFrequency = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)             
        {
            iFrequency++;
        }
    }
    return iFrequency;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and accept anather numbers as no, return frequency of NO from it.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iRet =0, iValue = 0;   
    int *ptr =NULL; 

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr, iSize, iValue);
    printf("%d\n",iRet);
   
    free(ptr);

    return 0;
}