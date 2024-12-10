/*
Q-3 Write a Java Program which accept N numbers from user and accept one anather number as iNo,
    Return the index of last occurance of that iNo.
    Input : N   : 6
            iNo : 66
            Elements : 85   66  3   66  93   88
    Output: 3
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept N numbers from user and accept one anather number as iNo,
//Return the index of last occurance of that iNo.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment39_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0, iValue = 0, i = 0, iRet = 0;

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
        iRet = aobj.LastOcc();

        System.out.println("Last Occurrence of the given number : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : Number
//  Function Name  : LastOcc
//  Description    : Return the index of last occurance of given number.
//  Input          : Integer, Integer, Array
//  Output         : Integer
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

    public int LastOcc()
    {
        int i = 0;
        for(i = (iSize-1); i >= 0; i--)
        {
            if(Brr[i] == iNo)
            {
                break;
            }
        }

        if(i < 0)
        {
            return -1;
        }
        else
        {
            return i;   
        }
    }
}