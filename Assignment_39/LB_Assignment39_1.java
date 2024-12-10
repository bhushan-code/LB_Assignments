/*
Q-1 Write a Java Program which accept N numbers from user and accept one anather number as iNo,
    Check whether iNo is present or not.
    Input : N   : 6
            iNo : 66
            Elements : 85   66  3   66  93   88
    Output: TRUE
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept N numbers from user and accept one anather number as iNo,
//Check whether iNo is present or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment39_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0, iValue = 0, i = 0;
        boolean bRet = false;

        System.out.println("Enter the number of Element : ");
        iLength = sobj.nextInt();

        System.out.println("Enter the number you want to find in Array : ");
        iValue = sobj.nextInt();

        int Arr[] = new int[iLength];

        System.out.println("Enter all the elements : ");
        for(i = 0; i < iLength; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Number aobj = new Number(iLength, iValue, Arr);
        bRet = aobj.Check();

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Number
//  Function Name  : Check
//  Description    : Check whether given number is present or not.
//  Input          : Integer, Integer, Array
//  Output         : Boolean
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public int iSize;
    public int iNo;
    public int Brr[];

    Number(int A, int B, int C[])
    {
        iSize = A;
        iNo = B;
        Brr = C;
    }

    public boolean Check()
    {
        int i = 0;
        for(i = 0; i < iSize; i++)
        {
            if(Brr[i] == iNo)
            {
                break;
            }
        }
        
        if(i==iSize)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}