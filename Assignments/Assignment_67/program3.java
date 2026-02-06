// Write a program which accept one number from user and check whether 9th or 12th bit is ON or OFF.

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask = 0x1;
        int iResult = 0;

        iMask = iMask << (9 - 1) | iMask << (12 - 1);

        iResult = iNo & iMask;

        if(iResult != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program3
{
    public static void main(String A[])
    { 
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        bRet = bobj.ChkBit(iValue);

        System.out.print(bRet);
    }
}