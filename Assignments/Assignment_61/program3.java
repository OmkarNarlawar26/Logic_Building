//  Write a program in Java which accpets file name and one string from user and append that string at the end of file.

import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String FileName = sobj.nextLine();

        System.out.println("Enter string to append : ");
        String str = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(FileName, true);
        foobj.write(str.getBytes());

        foobj.close();

        System.out.println("String appended successfully");
    }
}