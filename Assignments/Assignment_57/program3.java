//  Write java program to accept directory name from user and create that directory.

import java.util.Scanner;
import java.io.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dirName = sc.nextLine();

        File dirobj = new File(dirName);

        if(dirobj.mkdir())
        {
            System.out.println("Directory created successfully");
        }
        else
        {
            System.out.println("Directory already exists or cannot be created");
        }

        sc.close();
    }
}