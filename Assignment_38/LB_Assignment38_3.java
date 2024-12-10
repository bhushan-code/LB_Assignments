/*
Q-3 Write a Java Program which accept numbers from user and return count of digit in between 3 and 7.
    Input : 2495
    Output: 2
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return count of digit in between 3 and 7.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment38_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number of Element : ");
        iValue = sobj.nextInt();

        Digit aobj = new Digit(iValue);
        iRet = aobj.CountRange();

        System.out.println("Count of digits in between 3 and 7 is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Digit
//  Function Name  : CountRange
//  Description    : Return count of digit in between 3 and 7.
//  Input          : Integer
//  Output         : Integer
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digit
{
    public int iNo;

    Digit(int A)
    {
        if(A < 0)
        {
            A = -A;
        }
        iNo = A;
    }

    public int CountRange()
    {
       int iCount = 0;
       int iDigit = 0;
       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iNo = iNo / 10;
        
            if(iDigit > 3 && iDigit < 7)
            {
                iCount++;
            }
       }
       return iCount;
    }
}