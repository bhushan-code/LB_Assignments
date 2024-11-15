//Q-4 Accept N numbers from user and return the frequency of 11 from it.
//Input   :     N : 6
//              Elements : 11  66  11   80  93  88   
//Output  :     2


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Frequency
// Description    : Return the frequency of 11 from it.
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 12/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iFrequency = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)             
        {
            iFrequency++;
        }
    }
    return iFrequency;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return the frequency of 11 from it.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iRet =0;    
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
    printf("%d\n",iRet);

    free(ptr);

    return 0;
}