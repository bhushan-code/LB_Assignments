/*
Q-1 Write the program which accept string from user and copy character of 
that string into anather string in reverse order.
Input     :  "Marvellous Python"
Output    :  "nohtyP suillevraM"
*/


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrCpyRev
// Description    : Copy string into anather string in reverse order.
// Input          : Pointer, Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 03/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *ch, char *bh)
{
    int iLength = 0;
    int iStart = 0, iEnd = 0;

    while(ch[iLength] != '\0')
    {
        iLength++;
    }
    iEnd = iLength -1;
  
    for(iStart = 0; iStart <= iEnd; iStart++)
    {
        bh[iStart] = ch[iEnd - iStart];
    }
   bh[iLength] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string and copy character of that string into anather string in reverse order
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr, Brr);

    printf("%s\n",Arr);

    printf("%s\n",Brr);

    return 0;
}