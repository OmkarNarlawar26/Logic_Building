// Write a program which accept one number from user and display position of common ON bits from that two numbers.

import java.util.Scanner;

class Bitwise
{
    public void CommonBits(int iNo1, int iNo2)
    {
        int iResult = iNo1 & iNo2;
        int iPos = 1;

        while(iResult != 0)
        {
            if((iResult & 1) == 1)
            {
                System.out.print(iPos + " ");
            }
            iResult = iResult >> 1;
            iPos++;
        }
    }
}

class program2
{
    public static void main(String A[])
    { 
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second Number : ");
        iValue2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        System.out.print("Common ON bit positions : ");
        bobj.CommonBits(iValue1,iValue2);
    }
}