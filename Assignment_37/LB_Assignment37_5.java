/*
Q-5 Write a Java Program which accept N numbers from user and display all element which are multiple of 11.
    Input : N : 6
          : Elements : 85 66 3 15 93 88
    Output: 66  88
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept N numbers from user and display all element which are multiple of 11.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment37_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, i = 0;

        System.out.println("Enter the number of Element : ");
        iValue = sobj.nextInt();

        int Arr[] = new int[iValue];
        
        System.out.println("Enter Elements : ");

        for(i = 0; i < iValue; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo aobj = new ArrayDemo(Arr,iValue);
        aobj.Display();
     
        sobj.close();
    } 
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : ArrayDemo
//  Function Name  : Display
//  Description    : Display all element which are multiple of 11.
//  Input          : Array, Integer
//  Output         : -
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
        this.Arr = A;
        this.iSize = B;
    }

    public void Display()
    {
        int i = 0;
        for(i = 0; i<iSize; i++)
        {
            if(Arr[i]%11==0)
            {
                System.out.println(Arr[i]);
            }                
        }
    }
}