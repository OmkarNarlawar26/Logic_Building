//  Write a program in Java which accpets file from user and display total number of bytes read from that file.

import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        int iRet;
        int iCount = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String FileName = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(FileName);

        while((iRet = fiobj.read()) != -1)
        {
            iCount++;
        }

        fiobj.close();

        System.out.println("Total bytes read : "+iCount);
    }
}