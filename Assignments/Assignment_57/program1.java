//  Write java program to accept two files names from user and open firsr file and create new file (second name) and copy the data from first file into newly created file.

import java.util.Scanner;
import java.io.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Source file name : ");
        String src = sc.nextLine();

        System.out.print("Enter destination file name : ");
        String dest = sc.nextLine();

        FileInputStream fin = new FileInputStream(src);
        FileOutputStream fout = new FileOutputStream(dest);

        int ch;

        while((ch = fin.read()) != -1)
        {
            fout.write(ch);
        }

        fin.close();
        fout.close();

        System.out.println("File copied successfully");
        sc.close();
    }
}