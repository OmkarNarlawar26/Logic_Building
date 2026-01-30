//  Write a program in Java which accpets file name from user and split that file into two separate files (first half and second half).

import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[]) throws Exception
    {
        int iRet = 0;

        long iCount = 0;

        long Size = 0;
        long half = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        Size = fobj.length();
        half = Size / 2;

        FileInputStream fiobj = new FileInputStream(FileName);

        FileOutputStream foobj1 = new FileOutputStream("FirstHalf.txt");
        FileOutputStream foobj2 = new FileOutputStream("SecondHalf.txt");

        while((iRet = fiobj.read()) != -1)
        {
            if(iCount < half)
            {
                foobj1.write(iRet);
            }
            else
            {
                foobj2.write(iRet);
            }

            iCount++;
        }

        fiobj.close();
        foobj1.close();
        foobj2.close();

        System.out.println("File splite into two halfs successfully");
    }
}