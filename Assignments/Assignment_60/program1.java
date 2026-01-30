//  Write a program in Java which accpets a directory name from user and calculate total size of all files from that directory.

import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter ths name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        long TotalSize = 0;

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isFile())
                {
                    TotalSize = TotalSize + fArr[i].length();
                }
            }

            System.out.println("Total Size of files : "+ TotalSize +" bytes");
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}