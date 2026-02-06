// write a program which accept number from user and ON its first 4 bits. Return modified number.

import java.util.Scanner;

class Bitwise
{
    public int ONBit(int iNo)
    {
        int iMask = 0;
        int iResult = 0;

        iMask = 0x0000000f;

        iResult = iNo | iMask;

        return iResult;
    }
}

class program5
{
    public static void main(String A[])
    { 
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        iRet = bobj.ONBit(iValue);

        
        System.out.println("Modified number is : "+iRet);
    }
}