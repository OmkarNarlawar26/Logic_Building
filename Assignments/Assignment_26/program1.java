// Accept number from user and display below pattern.
// Input : 5
// OUTPUT : A   B   C   D   E

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        char Alpha = '\0';

        Alpha = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(Alpha+"\t");
            Alpha++;
        }
    }
}

class program1
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