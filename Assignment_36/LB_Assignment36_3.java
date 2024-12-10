/*
Q-3 Write a Java Program which accept string from user and return the difference between small characters
    and capital characters.
    Input : MarvellouS
    Output: 6   (8-2)
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and return diff bet small characters and capital characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment36_3
{
    public static void main(String A[])
    {
        int iRet = 0;
        String str = new String();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringDemo cobj = new StringDemo(str);
        iRet = cobj.CountDiff();

        System.out.println("Difference bet Small and Capital Characters is : "+iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name     : StringDemo
//  Function Name  : CountDiff
//  Description    : Return difference bet Small and Capital Characters.
//  Input          : String
//  Output         : Integer
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

    public int CountDiff()
    {
        int i = 0;
        int iCountCap = 0;
        int iCountSmall = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(this.str.charAt(i)>='A' && this.str.charAt(i)<='Z')               
            {
                iCountCap++;
            }
            else if(this.str.charAt(i)>='a' && this.str.charAt(i)<='z')               
            {
                iCountSmall++;
            }
        }
        return (iCountSmall-iCountCap);
    }
}