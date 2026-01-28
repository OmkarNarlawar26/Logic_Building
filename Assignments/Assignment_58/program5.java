//  Write java program to accept directory name from user and write data of files along with its name and size of each file into one newly created file named as "Marvellous4.txt".

import java.util.Scanner;
import java.io.*;

class program5
{
    static void WriteFileNameSizeData(String dirName) throws Exception
    {
        File dirobj = new File(dirName);

        FileOutputStream fout = new FileOutputStream("Marvellous4.txt");

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            for(File fobj : files)
            {
                if(fobj.isFile())
                {
                    fout.write(("File name : " + fobj.getName() + "\n").getBytes());
                    fout.write(("File Size : " + fobj.length() + "bytes\n").getBytes());

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
            System.out.println("File names, size and data written Successfully");
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

        WriteFileNameSizeData(name);

        sc.close();
    }
}