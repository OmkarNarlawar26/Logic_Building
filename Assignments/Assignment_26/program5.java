// Accept number from user and display below pattern.
// Input : 8
// OUTPUT : 2   4   6   8   10  12  14  16

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}