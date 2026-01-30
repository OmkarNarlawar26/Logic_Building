//  Write a program in Java which accpets file name from user and handle all possible file related exceptions properly.

import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[])
    {
        int iRet = 0 ;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fiobj = new FileInputStream(FileName);

            while((iRet = fiobj.read()) != -1)
            {
                //
            }

            fiobj.close();
            System.out.println("File read successfully");
        }
        catch(FileNotFoundException fnfeobj)
        {
            System.out.println("File not Found");
        }
        catch(IOException ioeobj)
        {
            System.out.println("File read/write error");
        }
        catch(Exception eobj)
        {
            System.out.println("Unknown error occured");
        }
    }
}