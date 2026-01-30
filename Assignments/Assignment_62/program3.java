//  Write a program in Java which accpets file name and integer N from user and copy last N bytes into a new file.

import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws Exception
    {
        int iRet;
        long size = 0;
        long skipbytes = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileName = sobj.nextLine();

        System.out.println("Enter number of bytes N :  ");
        int iNo = sobj.nextInt();

        File fobj = new File(FileName);

        FileInputStream fiobj = new FileInputStream(FileName);

        FileOutputStream foobj = new FileOutputStream("LastNBytes.txt");

        size = fobj.length();
        skipbytes = size - iNo;

        if(skipbytes < 0)
        {
            skipbytes = 0;
        }
        fiobj.skip(skipbytes);

        while((iRet = fiobj.read()) != -1)
        {
            foobj.write(iRet);
        }

        fiobj.close();
        foobj.close();

        System.out.println("Last " + iNo + " bytes copied");
    }
}