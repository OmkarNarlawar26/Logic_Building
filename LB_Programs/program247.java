////////////////////////////////////////////////////////////////////////
//
//  Required Import File
//
////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

class program247
{
    public static void main(String A[])
    {
        int iCnt = 0;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sobj = scanobj.nextLine();

        char Arr[] = sobj.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)        // Here length is treated as property
        {
            System.out.println(Arr[iCnt]);
        }
    }
}// End of Main Class