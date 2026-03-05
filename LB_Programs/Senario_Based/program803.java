// 0    1   2   3   5   8   13  21  .......

import java.util.*;

class program803
{
    public static void main(String A[])
    {
        int iSize = 0;
        int i = 0;
        long First = 0, Second = 0, Next = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements in series : ");
        iSize = sobj.nextInt();

        for(i = 1, First = 0, Second = 1; i <= iSize; i++)
        {
            System.out.print(First + " ");
            Next = First + Second;

            First = Second;
            Second = Next;
        }

        System.out.println();

        sobj.close();
    }
}

