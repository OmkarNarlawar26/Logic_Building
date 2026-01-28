//  Write java program to accept file name from user and open that file.

import java.io.File;
import java.util.Scanner;

class program1
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fileName = sc.nextLine();

        File file = new File(fileName);

        if(file.exists())
        {
            System.out.println("File opened Successfully");
        }
        else
        {
            System.out.println("Fil does not exist");
        }
    }
}