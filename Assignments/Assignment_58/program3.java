//  Write java program to accept directory name from user and write data of files into one newly created file names as "Marvellous2.txt".

import java.util.Scanner;
import java.io.*;

class program3
{
    static void WriteFileData(String dirName) throws Exception
    {
        File dirobj = new File(dirName);

        FileOutputStream fout = new FileOutputStream("Marvellous2.txt");

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            for(File fobj : files)
            {
                if(fobj.isFile())
                {
                    FileInputStream fin = new FileInputStream(fobj);

                    int ch;

                    while((ch = fin.read()) != -1)
                    {
                        fout.write(ch);
                    }

                    fin.close();
                }
            }
            System.out.println("File data written Successfully");
        }
        else
        {
            System.out.println("Directory does not exist");
        }

        fout.close();
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String name = sc.nextLine().trim();

        WriteFileData(name);

        sc.close();
    }
}