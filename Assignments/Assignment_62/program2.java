//  Write a program in Java which accpets file name and integer N from user and copy first N bytes into a new file.

import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        int iRet;
        int iCount = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileName = sobj.nextLine();

        System.out.println("Enter number of bytes N :  ");
        int iNo = sobj.nextInt();

        FileInputStream fiobj = new FileInputStream(FileName);

        FileOutputStream foobj = new FileOutputStream("FirstNBytes.txt");

        while((iRet = fiobj.read()) != -1)
        {
            foobj.write(iRet);
            iCount++;
        }

        fiobj.close();
        foobj.close();

        System.out.println("First " + iNo + " bytes copied");
    }
}