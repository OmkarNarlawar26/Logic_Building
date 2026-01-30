//  Write a program in Java which accpets source file name and destination file name from user and copy data from source to destonation (byte by byte).

import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String FileNameSrc = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String FileNameDest = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(FileNameSrc);
        FileOutputStream foobj = new FileOutputStream(FileNameDest);

        int Data;

        while((Data = fiobj.read()) != -1)
        {
            foobj.write(Data);
        }

        fiobj.close();
        foobj.close();

        System.out.println("File copied successfully (Byte by Byte)");
    }
}