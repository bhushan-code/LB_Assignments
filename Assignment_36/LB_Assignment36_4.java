/*
Q-4 Write a Java Program which accept string from user and check whether it contains vowels in it or not.
    Input : marvellous
    Output: TRUE
*/


import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string from user and check whether it contains vowels in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class LB_Assignment36_4
{
    public static void main(String A[])
    {
        boolean bRet = false;
        String str = new String();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringDemo cobj = new StringDemo(str);
        bRet = cobj.ChkVowel();

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
// Class Name     : StringDemo
//  Function Name  : ChkVowel
//  Description    : Checks string contains vowels or not.
//  Input          : String
//  Output         : Boolean
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

    public boolean ChkVowel()
    {
        int i = 0;
        boolean bFlag = false;

        for(i = 0; i < this.str.length(); i++)
        {
            if(this.str.charAt(i)=='A' || this.str.charAt(i)=='E' || this.str.charAt(i)=='I' || this.str.charAt(i)=='O' || this.str.charAt(i)=='U' || this.str.charAt(i)=='a'  || this.str.charAt(i)=='e'  || this.str.charAt(i)=='i'  || this.str.charAt(i)=='o'  || this.str.charAt(i)=='u' )               
            {
                bFlag = true;
                break;
            }
           
        }
        return bFlag;
    }
}