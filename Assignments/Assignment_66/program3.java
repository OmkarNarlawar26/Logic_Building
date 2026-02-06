// write a program which accept one number from user and position from user and ON that bit.Return modified number.

import java.util.Scanner;

class Bitwise
{
    public int OnBit(int iNo, int iPos)
    {
        int iMask = 0x1, iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo | iMask;

        return iResult;
    }
}

class program3
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
         iRet = bobj.OnBit(iValue,iPos);

        System.out.println("Modified number is : "+iRet);
        
    }
}