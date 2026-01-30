//  Write a program in Java which accpets a directory name from and file extension from user and display only files having that extension.

import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        System.out.println("Enter file extension : ");
        String ExtName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if((fArr[i].isFile()) && (fArr[i].getName().endsWith(ExtName)))
                {
                    System.out.println(fArr[i].getName());
                }
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}