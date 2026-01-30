//  Write a program in Java which accpets a directory name from user and display tha name of largest file (by size).

import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter ths name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        long MaxSize = 0;
        String MaxFile = null;

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if((fArr[i].isFile()) && (fArr[i].length() > MaxSize))
                {
                    MaxSize = fArr[i].length();
                    MaxFile = fArr[i].getName();
                }
            }

            System.out.println("Largest File : "+MaxFile);
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}