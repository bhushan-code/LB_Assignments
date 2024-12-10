/*
Q-1 Write a Java Program which accept numbers from user and return count of even digits.
    Input : 2395
    Output: 1
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return count of even digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment38_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digit aobj = new Digit(iValue);
        iRet = aobj.CountEven();

        System.out.println("Count of Even digit is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Digit
//  Function Name  : CountEven
//  Description    : Return count of even digits.
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

    public int CountEven()
    {
       int iCountO = 0;
       int iDigit = 0;
       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iNo = iNo / 10;
        
            if(iDigit % 2 == 0)
            {
                iCountO++;
            }
       }
        return iCountO;
    }
}