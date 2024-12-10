/*
Q-1 Write a Java Program which accept N numbers from user and return difference between summation of 
    even elements and summation of odd elements.
    Input : N : 6
          : Elements : 85 66 3 80 93 88
    Output: 53 (234-181)
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return difference between summation of 
//even elements and summation of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment37_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0, i = 0;

        System.out.println("Enter the number of Element : ");
        iValue = sobj.nextInt();

        int Arr[] = new int[iValue];
        
        System.out.println("Enter Elements : ");

        for(i = 0; i < iValue; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo aobj = new ArrayDemo(Arr,iValue);
        iRet = aobj.Difference();

        System.out.println("Difference is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : ArrayDemo
//  Function Name  : Difference
//  Description    : Return difference between even and odd summation.
//  Input          : Array, Integer
//  Output         : Integer
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ArrayDemo
{
    public int Arr[];
    public int iSize;

    ArrayDemo(int A[],int B)
    {
        Arr = A;
        iSize = B;
    }

    public int Difference()
    {
        int iSumE = 0;
        int iSumO = 0;
        int i = 0;
        for(i=0; i<iSize; i++)
        {
            if(Arr[i]%2 == 0)
            {
                iSumE = iSumE + Arr[i];
            }
            else
            {
                iSumO = iSumO + Arr[i];
            }
        }
        return (iSumE-iSumO);
    }
}