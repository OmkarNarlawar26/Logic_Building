//  Write java program to accept file name from user and open that file and display the contents on screen.

import java.util.Scanner;
import java.io.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fileName = sc.nextLine();

        File file = new File(fileName);

        if(!file.exists())
        {
            System.out.println("File not found");
            return;
        }
        
        BufferedReader br = new BufferedReader(new FileReader(file));
        String line;

        System.out.println("File contents : ");
        while((line = br.readLine()) != null)
        {
            System.out.println(line);
        }
        br.close();
    }
}