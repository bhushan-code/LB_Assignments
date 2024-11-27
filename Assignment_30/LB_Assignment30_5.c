/*
Q-5 Accept division of student from the user and depends on the division display exam timing,
there are 4 division in school as A, B, C, D. Exam timing of A at 7 AM, B at 8:30AM, C at 9:20AM,
D at 10:30AM.(application should be case insensitive)
Input     :  a
Output    :  Your Exam at 7 AM
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplaySchedule
// Description    : Display exam timing.
// Input          : Character
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 27/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{

    if(ch == 'a' || ch == 'A')
        {
            printf("Your Exam at 7 AM \n");
        }
    else if(ch == 'b' || ch == 'B')
        {
            printf("Your Exam at 8:30 AM \n");
        }
    else if(ch == 'c' || ch == 'C')
        {
            printf("Your Exam at 9:20 AM \n");
        }
    else if(ch == 'd' || ch == 'D')
        {
            printf("Your Exam at 10:30 AM \n");
        }
    else
        {
            printf("Please Enter valid division \n");
        }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept division character from user and display exam timing.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Please enter Character : ");
    scanf(" %c",&ch);

    DisplaySchedule(ch);
    
    return 0;
}