//  Write java program to accept file name from user and create new file of that name if it is not existing.

import java.util.Scanner;
import java.io.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fileName = sc.nextLine();

        File file = new File(fileName);

        if(file.createNewFile())
        {
            System.out.println("File created successfully");
        }
        else
        {
            System.out.println("File already exist");
        }

    }
}