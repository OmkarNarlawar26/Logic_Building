// Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

import java.util.Scanner;

class Bitwise
{
    public int CountOne(int iNo)
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            if((iNo & 1) == 1)
            {
                iCnt++;
            }
            iNo = iNo >> 1;
        }
        return iCnt;
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
        iRet = bobj.CountOne(iValue);

        System.out.println("Number of ON bits are : "+iRet);   
    }
}