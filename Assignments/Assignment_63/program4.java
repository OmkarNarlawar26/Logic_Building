//  Write a program in Java which accpets source directory name and create a combined.bin that stores data od=f all files sequentially.

import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        File dirobj = new File(DirName);
        File fles[] = dirobj.listFiles();

        FileOutputStream foobj = new FileOutputStream("Combined.bin");

        File files[] = dirobj.listFiles();

        for(int i = 0; i < files.length; i++)
        {
            if(files[i].isFile())
            {
                FileInputStream fiobj = new FileInputStream(files[i]);

                while((iRet = fiobj.read()) != -1)
                {
                    foobj.write(iRet);
                }
                fiobj.close();
            }
        }

        foobj.close();

        System.out.println("Combined.bin file created");
    }
}