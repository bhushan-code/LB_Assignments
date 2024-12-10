/*
Q-5 Write a Java Program which accept N numbers from user and return product of all odd elements.
    Input : N   : 6
            Elements : 85   66  3   76  93   88
    Output: 45
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept N numbers from user and return product of all odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment39_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0, i = 0, iRet = 0;

        System.out.println("Enter the number of Element : ");
        iLength = sobj.nextInt();

        int Arr[] = new int[iLength];

        System.out.println("Enter all the elements : ");
        for(i = 0; i < iLength; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Number aobj = new Number(iLength, Arr);
        iRet = aobj.Product();

        System.out.println("Product of all Odd elements : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Number
//  Function Name  : Product
//  Description    : Return product of all odd elements..
//  Input          : Integer, Array
//  Output         : Integer
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public int iSize;
    public int Brr[];

    Number(int A, int C[])
    {
        iSize = A;
        Brr = C;
    }

    public int Product()
    {
        int iMulti = 1;
        int AllEven = 0;
        int i = 0;
        for(i = 0; i < iSize; i++)
        {
            if(Brr[i] % 2 != 0)
            {
                iMulti = iMulti * Brr[i];
                AllEven = 1;
            }
        }
        if(AllEven == 0)
        {
            return 0;
        }
        else 
        {
            return iMulti;
        }            
    }
}