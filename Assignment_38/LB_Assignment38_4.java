/*
Q-4 Write a Java Program which accept numbers from user and return multiplication of all digits.
    Input : 2395
    Output: 270
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return multiplication of all digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment38_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number of Element : ");
        iValue = sobj.nextInt();

        Digit aobj = new Digit(iValue);
        iRet = aobj.Multiply();

        System.out.println("Multiplication of all digits is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Digit
//  Function Name  : Multiply
//  Description    : Multiplication of all digits.
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

    public int Multiply()
    {
       int iMulti = 1;
       int iDigit = 0;
       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iMulti = iMulti * iDigit;
       }
       return iMulti;
    }
}