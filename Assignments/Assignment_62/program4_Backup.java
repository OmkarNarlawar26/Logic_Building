//  Write a program in Java which accpets file name from user and create backup copy of it with name original_backup.ext..

import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        int iRet;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        FileInputStream fiobj = new FileInputStream(FileName);

        String backupName = FileName.replace(".", "_Backup.");

        FileOutputStream foobj = new FileOutputStream(backupName);

        while((iRet = fiobj.read()) != -1)
        {
            foobj.write(iRet);
        }

        fiobj.close();
        foobj.close();

        System.out.println("Backup file created : " + backupName);
    }
}