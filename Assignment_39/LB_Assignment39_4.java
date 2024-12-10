/*
Q-4 Write a Java Program which accept N numbers from user and accept range,
    Display all elements from that range.
    Input : N   : 6
            iStart : 60
            iEnd   : 90
            Elements : 85   66  3   76  93   88
    Output: 66  76  88
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept N numbers from user and accept range, display all elements from that range.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment39_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0, iValue1 = 0, iValue2 = 0, i = 0;

        System.out.println("Enter the number of Element : ");
        iLength = sobj.nextInt();

        System.out.println("Enter the Start : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the End : ");
        iValue2 = sobj.nextInt();

        int Arr[] = new int[iLength];

        System.out.println("Enter all the elements : ");
        for(i = 0; i < iLength; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Number aobj = new Number(iLength, iValue1, iValue2, Arr);
        aobj.Display();

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Number
//  Function Name  : Display
//  Description    : Display all elements from the given range.
//  Input          : Integer, Integer, Integer, Array
//  Output         : -
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public int iSize;
    public int iStart;
    public int iEnd;
    public int Brr[];

    Number(int A, int B, int C, int D[])
    {
        this.iSize = A;
        if(B < C)
        {
            iStart = B;
            iEnd = C;
        }
        else
        {
            iStart = C;
            iEnd = B;
        }
        Brr = D;
    }

    public void Display()
    {
        int i = 0;
        System.out.println("Elements between the range are : ");
        for(i = 0; i < iSize; i++)
        {
            if(Brr[i] >= iStart && Brr[i] <= iEnd)
            {
                System.out.print(Brr[i]+"\t");
            }
        }
    }
}