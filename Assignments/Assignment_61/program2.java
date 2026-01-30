//  Write a program in Java which accpets source file name and destination file name from user and copy data using byte [] buffer.

import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        int iRet = 0;

        byte Buffer[] = new byte[1024];

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileNameSrc = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String FileNameDest = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(FileNameSrc);
        FileOutputStream foobj = new FileOutputStream(FileNameDest);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer, 0, iRet);
        }

        fiobj.close();
        foobj.close();

        System.out.println("File copied successfully using buffer");
    }
}