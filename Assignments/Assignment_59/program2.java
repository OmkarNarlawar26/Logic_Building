//  Write a program in Java which accpets a directory name from user and Display only regular files.

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

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("Folder is present");

            File fArr[] = fobj.listFiles();

            System.out.println("Number of files in the folder are : "+fArr.length);

            for(int i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isFile())
                {
                    System.out.println("File Name : "+fArr[i].getName());
                }
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}