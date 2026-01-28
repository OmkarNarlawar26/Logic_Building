//  Write java program to accept the fle name from user calculate checksum of that file and display on screen. (checksum means sum of all bytes)

import java.util.Scanner;
import java.io.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String name = sc.nextLine();

        FileInputStream fin = new FileInputStream(name);

        int ch;
        long checksum = 0;

        while((ch = fin.read()) != -1)
        {
            checksum = checksum + ch;
        }

        fin.close();
        System.out.println("CheckSum of file is : "+ checksum);

        sc.close();
    }
}