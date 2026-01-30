//  Write a program in Java which accpets a directory name from user and Display file name with its absolute path.

import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter ths name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                System.out.println("Name : "+fArr[i].getName());
                System.out.println("Path : "+fArr[i].getAbsolutePath());
                System.out.println();
            }
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
    }
}