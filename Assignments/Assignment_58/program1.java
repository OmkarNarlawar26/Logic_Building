//  Write java program to accept directory name from user and display all names of files from that directory which are regular file.

import java.util.Scanner;
import java.io.*;

class program1
{
    static void DisplayRegularFiles(String dirName)
    {
        File dirobj = new File(dirName);

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            for(File fobj : files)
            {
                if(fobj.isFile())
                {
                    System.out.println(fobj.getName());
                }
            }
        }
        else
        {
            System.out.println("Directory does not exist");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String name = sc.nextLine().trim();

        DisplayRegularFiles(name);
    }
}