/*
Q-5 Write a Java Program which accept string from user and display in reverse order.
    Input : marvellous
    Output: suollevram
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and display in reverse order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment36_5
{
    public static void main(String A[])
    {
        String str = new String();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringDemo cobj = new StringDemo(str);
        cobj.Reverse();

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : StringDemo
//  Function Name  : Reverse
//  Description    : Display string in reverse order.
//  Input          : String
//  Output         : -
//  Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
//  Date           : 09/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class StringDemo
{
    public String str;
    
    StringDemo(String A)
    {
        this.str = A;
    }

    public void Reverse()
    {
        int i = 0;

        for(i = (this.str.length()-1); i >=0 ; i--)
        {
           System.out.print(str.charAt(i));
        }
    }
}