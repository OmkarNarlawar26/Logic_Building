//  Write a program in Java which accpets source directory and destination directory and copy all files from source directory into destination directory.

import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source directory: ");
        String DirNameSrc = sobj.nextLine();

        System.out.println("Enter destination directory: ");
        String DirNameDest = sobj.nextLine();

        File srcobj = new File(DirNameSrc);
        File destobj = new File(DirNameDest);

        if(destobj.exists() == false)
        {
            destobj.mkdir();
        }

        File files[] = srcobj.listFiles();

        for(int i = 0; i < files.length; i++)
        {
            if(files[i].isFile())
            {
                FileInputStream fiobj = new FileInputStream(files[i]);
                FileOutputStream foobj = new FileOutputStream(DirNameDest + "/" + files[i].getName());

                while((iRet = fiobj.read()) != -1)
                {
                    foobj.write(iRet);
                }

                fiobj.close();
                foobj.close();
            }
        }

        System.out.println("All files copied successfully");
    }
}