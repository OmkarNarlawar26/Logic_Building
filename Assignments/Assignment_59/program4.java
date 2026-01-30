//  Write a program in Java which accpets a directory name from user and Display count of total files and total folders.

import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter ths name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        int FileCount = 0;
        int FolderCount = 0;

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isDirectory())
                {
                    FolderCount++;
                }
                else if(fArr[i].isFile())
                {
                    FileCount++;
                }
            }

            System.out.println("Total Folder : "+FolderCount);
            System.out.println("Total File : "+FileCount);
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}