//  Write java program to accept directory name from user and display all names of files from that directory.

import java.util.Scanner;
import java.io.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Directory name : ");
        String dirName = sc.nextLine();

        File dir = new File(dirName);

        if(dir.exists() && dir.isDirectory())
        {
            String files[] = dir.list();

            System.out.println("Files in directory : ");

            for(String file : files)
            {
                System.out.println(file);
            }
        }
        else
        {
            System.out.println("Directory does not exist");
        }
        sc.close();
    }
}