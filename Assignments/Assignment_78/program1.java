/*

A hotel charges ₹3000 per day. For long stays, hotel provides discount to retain customers.

Rules:
    • ₹3000/day
    • If stay > 7 days → 5% discount on total bill

Input:
    • Number of days stayed

Validations:
    • Days must be ≥ 0

Expected Output:
    Total Stay Duration: <days> days
    Final Bill Amount: ₹<amount>

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Days = 0;

        System.out.println("Enter number of Days : ");
        Days = sobj.nextInt();

        if(Days < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        double Charges = 0;
        double Discount = 0;

        if(Days <= 7)
        {
            Charges = Days * 3000;
        }
        else
        {
            Discount = (Days * 3000) * 0.05;
            Charges = (Days * 3000) - Discount;
        }

        System.out.println("Total Stay Duration : " + Days + " days");
        System.out.println("Final Bill Amount   : " + Charges);

        sobj.close();
    }
}