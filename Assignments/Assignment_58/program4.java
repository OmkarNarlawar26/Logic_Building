//  Write java program to accept directory name from user and write data of files along with its name into one newly created file names as "Marvellous3.txt".

import java.util.Scanner;
import java.io.*;

class program4
{
    static void WriteFileNameandData(String dirName) throws Exception
    {
        File dirobj = new File(dirName);

        FileOutputStream fout = new FileOutputStream("Marvellous3.txt");

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            for(File fobj : files)
            {
                if(fobj.isFile())
                {
                    fout.write(("File name : " + fobj.getName() + "\n").getBytes());

                    FileInputStream fin = new FileInputStream(fobj);

                    int ch;

                    while((ch = fin.read()) != -1)
                    {
                        fout.write(ch);
                    }

                    fout.write("\n\n".getBytes());
                    fin.close();
                }
            }
            System.out.println("File names and data written Successfully");
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

        WriteFileNameandData(name);

        sc.close();
    }
}