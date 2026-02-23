import java.util.*;

class program633
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0x1, iResult = 0, iPos = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println(iPos + "th bit is ON");
        }
        else
        {
            System.out.println(iPos + "th bit is OFF");
        }
        
    }
}
