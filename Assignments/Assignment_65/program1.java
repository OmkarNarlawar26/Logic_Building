// write a program which accept number from user and off 7th bit of that number if it is on.Return modified number.

import java.util.Scanner;

class Bitwise
{
    public int OffBit(int iNo)
    {
        int iMask = 0;
        int iResult = 0;

        iMask = 0x00000040;

        iResult = iNo & (~iMask);

        return iResult;
    }
}

class program1
{
    public static void main(String A[])
    { 
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        iRet = bobj.OffBit(iValue);

        
        System.out.println("Modified number is : "+iRet);
    }
}