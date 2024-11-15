//Q-5 Accept N numbers from user and accept one anather numbers as No, check whether No is present or not.
//Input   :     N : 6 
//              NO: 66
//              Elements : 66  66  3   15  93  88
//Output  :     TRUE


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Check
// Description    : Checks whether No is present or not.
// Input          : Pointer, Integer
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 13/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool Check(int Arr[], int iLength, int iNo)
{
    bool bCheck = false;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)             
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and one anather numbers as No, check whether No is present or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;   
    bool bRet = false;
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

    bRet = Check(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    free(ptr);

    return 0;
}