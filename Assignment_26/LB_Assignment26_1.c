/*
Q-1 Write the Program which display the ASCII table.Table contains  Decimal, Octal, Hexadecimal and Symbol
 representation of every member from the o to 255.
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayASCII
// Description    : Display ASCII table.
// Input          : -
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int ASCII = 0;
    
    printf("+-------------------------------+\n");

    printf("| Dec\t| Octal\t| Hex\t| Char\t|\n");
    
    printf("+-------------------------------+\n");

    for( ASCII = 0; ASCII <= 255; ASCII++)
    {
        printf("| %d\t| %o\t| %x\t| %c\t|\n",ASCII, ASCII, ASCII, ASCII);

    }
    printf("+-------------------------------+\n");

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application will display the ASCII table.Table contains - Decimal, Octal, Hexadecimal and Symbol.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();
    return 0;
}