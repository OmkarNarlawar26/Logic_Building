// write a program which accept one number from user and position from user and check whether bit at that position is on or off. If bit is on return trhe otherwise return false.

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo, int iPos)
    {
        int iMask = 0x1, iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program1
{
    public static void main(String A[])
    { 
        int iValue = 0, iPos = 0;

        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        bRet = bobj.ChkBit(iValue,iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }
    }
}