//  Write a program in Java which copies a file using normal streams and buffered streams and display the time required for both.

import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileNameSrc = sobj.nextLine();

        //  Normal Streams
        long start1 = System.currentTimeMillis();

        FileInputStream fin1 = new FileInputStream(FileNameSrc);
        FileOutputStream fout1 = new FileOutputStream("NormalCopy.txt");

        while((iRet = fin1.read()) != -1)
        {
            fout1.write(iRet);
        }

        fin1.close();
        fout1.close();

        long end1 = System.currentTimeMillis();

        //  Buffered start2
        long start2 = System.currentTimeMillis();

        BufferedInputStream biobj = new BufferedInputStream(new FileInputStream(FileNameSrc));
        BufferedOutputStream boobj = new BufferedOutputStream(new FileOutputStream("BufferedCopy.txt"));

        while((iRet = biobj.read()) != -1)
        {
            boobj.write(iRet);
        }

        biobj.close();
        boobj.close();

        long end2 = System.currentTimeMillis();

        System.out.println("Time using normal streams : " + (end1 - start1) + " ms");
        System.out.println("Time using buffered streams : " + (end2 - start2) + " ms");
    }
}