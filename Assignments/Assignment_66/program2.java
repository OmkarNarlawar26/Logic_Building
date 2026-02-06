// write a program which accept one number from user and position from user and off that bit.Return modified number.

import java.util.Scanner;

class Bitwise
{
    public int OffBit(int iNo, int iPos)
    {
        int iMask = 0x1, iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo & (~iMask);

        return iResult;
    }
}

class program2
{
    public static void main(String A[])
    { 
        int iValue = 0, iPos = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
         iRet = bobj.OffBit(iValue,iPos);

        System.out.println("Modified number is : "+iRet);
        
    }
}