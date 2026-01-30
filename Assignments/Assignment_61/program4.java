//  Write a program in Java which accpets two input file names and on output file name and merge both files into the output file.

import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first file name: ");
        String FileName1 = sobj.nextLine();

        System.out.println("Enter second file name : ");
        String FileName2 = sobj.nextLine();

        System.out.println("Enter output file name : ");
        String FileNameOut = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(FileNameOut);

        FileInputStream fiobj1 = new FileInputStream(FileName1);

        while((iRet = fiobj1.read()) != -1)
        {
            foobj.write(iRet);
        }
        fiobj1.close();

        FileInputStream fiobj2 = new FileInputStream(FileName2);

        while((iRet = fiobj2.read()) != -1)
        {
            foobj.write(iRet);
        }
        fiobj2.close();

        foobj.close();

        System.out.println("File merged successfully");
    }
}