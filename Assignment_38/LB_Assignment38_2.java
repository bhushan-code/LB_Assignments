/*
Q-2 Write a Java Program which accept numbers from user and return count of odd digits.
    Input : 2395
    Output: 3
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return count of odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment38_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number of Element : ");
        iValue = sobj.nextInt();

        Digit aobj = new Digit(iValue);
        iRet = aobj.CountOdd();

        System.out.println("Count of Odd digit is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Digit
//  Function Name  : CountOdd
//  Description    : Return count of odd digits.
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

    public int CountOdd()
    {
       int iCountE = 0;
       int iDigit = 0;
       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iNo = iNo / 10;
        
            if(iDigit % 2 != 0)
            {
                iCountE++;
            }
       }
       return iCountE;
    }
}