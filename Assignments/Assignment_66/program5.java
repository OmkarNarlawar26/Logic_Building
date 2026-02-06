// write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number. (Nibble is a group of four bits)

import java.util.Scanner;

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0, iResult = 0;

        iMask = 0xF000000F;

        iResult = iNo ^ (iMask);

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
        iRet = bobj.ToggleBit(iValue);

        System.out.println("Modified number is : "+iRet);
        
    }
}