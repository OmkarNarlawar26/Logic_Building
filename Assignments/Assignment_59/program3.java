//  Write a program in Java which accpets a directory name from user and Display only sub-Directories from that directory.

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

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("Folder is present");

            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isDirectory())
                {
                    System.out.println("Folder Name : "+fArr[i].getName());
                }
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}