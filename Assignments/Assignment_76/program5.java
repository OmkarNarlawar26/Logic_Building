/*

A phone OS shows different battery warnings. The user wants a program that prints the correct battery status.

Rules:
    • Battery ≤ 5% → Critical
    • Battery ≤ 15% → Low
    • Otherwise → Normal

Input:
    • Battery percentage (integer)

Validations:
    • 0 to 100 only

Expected Output:
    Battery Percentage: <value>%
    Status: <Critical/Low/Normal>

*/

import java.util.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Battery = 0;

        System.out.println("Enter Battery percentage : ");
        Battery = sobj.nextInt();

        if(Battery < 0 || Battery > 100)
        {
            System.out.println("Invalid Input : Battery percentage must in between 0 to 100");
            return;
        }

        System.out.println("Battery percentage : "+ Battery + "%");

        if(Battery <= 5)
        {
            System.out.println("Status : Critical");
        }
        else if(Battery <= 15)
        {
            System.out.println("Status : Low");
        }
        else
        {
            System.out.println("Status : Normal");
        }

        sobj.close();
    }
}