//  Write a program in Java which reads first 1KB data from Combined.bin and writes it into a new output file.

import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[]) throws Exception
    {
        int iRet;
        int iCount = 0;

        FileInputStream fiobj = new FileInputStream("Combined.bin");
        FileOutputStream foobj = new FileOutputStream("First1KB.bin");

        while((iRet = fiobj.read()) != -1 && iCount < 1024)
        {
            foobj.write(iRet);
            iCount++;
        }

        fiobj.close();
        foobj.close();

        System.out.println("First 1KB data written to First1KB.bin");
    }
}