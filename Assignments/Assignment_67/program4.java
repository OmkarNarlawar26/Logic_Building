// Write a program which accept one number, two position from positions from user and check whether bit at first bit or bit at second position is ON or OFF.

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x1;
        int iMask2 = 0x1;
        int iMask = 0x1;
        int iResult = 0;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos1 - 1);

        iMask = iMask1 | iMask2;

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

class program4
{
    public static void main(String A[])
    { 
        int iValue = 0;
        int iPos1 = 0;
        int iPos2 = 0;
        boolean bRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter first position : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter second position : ");
        iPos2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        bRet = bobj.ChkBit(iValue, iPos1, iPos2);

        System.out.print(bRet);
    }
}