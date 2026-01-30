//  Write a program in Java which accpets a directory name from user and display the name of the smallest file (by size).

import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter ths name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        long MinSize = Long.MAX_VALUE;
        String MinFile = null;

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if((fArr[i].isFile()) && (fArr[i].length() < MinSize))
                {
                    MinSize = fArr[i].length();
                    MinFile = fArr[i].getName();
                }
            }

            System.out.println("Smallest File : "+MinFile);
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}