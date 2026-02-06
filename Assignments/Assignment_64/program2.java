// write a program which checks whether 5th and 18th bit is on or off.

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask = 0x1, iResult = 0;

        iMask = iMask << (5-1) | iMask << (18-1);

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

class program2
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

        if(bRet == true)
        {
            System.out.println("Bit are ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }
    }
}