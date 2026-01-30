//  Write a program in Java which accpets source and destination file name and copy file using BufferedInputStream and BufferedOutputStream.

import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileNameSrc = sobj.nextLine();

        System.out.println("Enter destination file name: ");
        String FileNameDest = sobj.nextLine();

        BufferedInputStream biobj = new BufferedInputStream(new FileInputStream(FileNameSrc));

        BufferedOutputStream boobj = new BufferedOutputStream(new FileOutputStream(FileNameDest));

        while((iRet = biobj.read()) != -1)
        {
            boobj.write(iRet);
        }

        biobj.close();
        boobj.close();

        System.out.println("File copied using buffered stream");
    }
}