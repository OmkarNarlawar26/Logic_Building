//  Write java program to accept file name from user and open that file in write mode and write some data at the end of file.

import java.util.Scanner;
import java.io.*;

class program3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fileName = sc.nextLine();

        //  true is append mode
        FileWriter fw = new FileWriter(fileName, true);

        System.out.print("Enter data to write : ");
        String data = sc.nextLine();

        fw.write("\n" + data);
        fw.close();

        System.out.println("Data written successfully");
    }
}