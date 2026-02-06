// write a program which checks whether first and list bit is on or off.First bit means bit number 1 and last bit means bit number 32.

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(long iNo)
    {
        int iFMask = 0, iLMask = 0;

        iFMask = 0x00000001;        
        iLMask = 0x80000000;        

        if((iNo & iFMask) != 0 && (iNo & iLMask) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program5
{
    public static void main(String A[])
    { 
        long iValue = 0;

        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextLong();

        Bitwise bobj = new Bitwise();
        bRet = bobj.ChkBit(iValue);

        
        if(bRet == true)
        {
            System.out.println("First and Last Bits are ON");
        }
        else
        {
            System.out.println("First and Last Bit is OFF");
        }
    }
}