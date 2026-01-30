//  Write a program in Java which accpets path from user and display whether it exists or not. If is exists, display whether it is a file or directory.

import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Path : ");
        String Path = sobj.nextLine();

        File fobj = new File(Path);

        if(fobj.exists())
        {
            System.out.println("Path Exists");

            if(fobj.isFile())
            {
                System.out.println("It is a file");
            }
            else if(fobj.isDirectory())
            {
                System.out.println("It is Folder");
            }
        }
        else
        {
            System.out.println("Path does not exist");
        }
        
    }
}