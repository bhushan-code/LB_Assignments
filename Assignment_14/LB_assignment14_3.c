//Q-3 Accept N numbers from user and check whether that numbers contains 11 in it or not. 
//Input   :     N : 6
//              Elements : 85  66  11   80  93  88   
//Output  :     11 is present


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Check
// Description    : Checking whether numbers contains 11 in it or not
// Input          : Pointer, Integer
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 12/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bCheck = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)             
        {
            bCheck = true;
            break;
        }     
    }
    return bCheck;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and check whether that numbers contains 11 in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0;
    bool bRet = false;
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

    bRet = Check(ptr, iSize);

    if(bRet == true)
    {
    printf("11 is present\n");
    }
    else
    {
    printf("11 is absent\n");
    }

    free(ptr);

    return 0;
}