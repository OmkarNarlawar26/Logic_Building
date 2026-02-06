// write a program which accept number from user and toggle 7th bit of that number. Return modified number.

import java.util.Scanner;

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0;
        int iResult = 0;

        iMask = 0x00000040;

        iResult = iNo ^ iMask;

        return iResult;
    }
}

class program3
{
    public static void main(String A[])
    { 
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        iRet = bobj.ToggleBit(iValue);

        
        System.out.println("Modified number is : "+iRet);
    }
}