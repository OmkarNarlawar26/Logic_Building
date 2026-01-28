//  Write java program to accept directory name from user and display all names of files from that directory and size of each file on screen.

import java.util.Scanner;
import java.io.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dirName = sc.nextLine().trim();

        File dirobj = new File(dirName);

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            System.out.println("Files in Directory : ");

            for(File fobj : files)
            {
                System.out.println(fobj.getName() + " : " + fobj.length() + " bytes");
            }
        }
        else
        {
            System.out.println("Directory does not exist");
        }

        sc.close();
    }
}