//  Write java program to accept file name from user and check whether that file is regular file or not.

import java.util.Scanner;
import java.io.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String name = sc.nextLine();

        File fobj = new File(name);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is regular file");
        }
        else
        {
            System.out.println("It is no a regular file");
        }

        sc.close();
    }
}