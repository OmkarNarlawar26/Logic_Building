//  Write java program to accept directory name from user and write names of files from that directory into one newly created file names as "Marvellous1.txt".

import java.util.Scanner;
import java.io.*;

class program2
{
    static void WriteFileNames(String dirName) throws Exception
    {
        File dirobj = new File(dirName);

        FileOutputStream fout = new FileOutputStream("Marvellous1.txt");

        if(dirobj.exists() && dirobj.isDirectory())
        {
            File files[] = dirobj.listFiles();

            for(File fobj : files)
            {
                fout.write((fobj.getName() + "\n").getBytes());
            }
            System.out.println("File names written Successfully");
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

        WriteFileNames(name);

        sc.close();
    }
}