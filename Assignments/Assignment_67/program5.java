// Write a program which accept one number from user and range or position from user. Toggle all bits from that range.

import java.util.Scanner;

class Bitwise
{
    public int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int iMask = 0;
        int iCnt = 0;
        int iResult = 0;

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iMask = iMask | (1 << (iCnt -1));
        }

        iResult = iNo ^ iMask;

        return iResult;
    }
}

class program5
{
    public static void main(String A[])
    { 
        int iValue = 0;
        int iStart = 0, iEnd = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter start position : ");
        iStart = sobj.nextInt();

        System.out.println("Enter end position : ");
        iEnd = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        iRet = bobj.ToggleBitRange(iValue, iStart, iEnd);

        System.out.println("Result after toggling bits : "+iRet);   
    }
}