/*

A shopping mall parking gate records entry and exit duration in hours.
The parking system calculates charges based on the total hours a vehicle stayed. Long-duration parking attracts
additional penalty.

Rules:
    • First 2 hours → ₹20 (flat)
    • After 2 hours → ₹10 per extra hour
    • If total hours > 10 → add ₹50 penalty

Input:
    • Total parking hours (integer)

Validations:
    • Hours cannot be negative

Expected Output:
    Total Parking Duration: <hours> hours
    Total Parking Fee: ₹<amount>

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Hours = 0;
        int Charges = 0;

        System.out.println("Enter Total Parking hours : ");
        Hours = sobj.nextInt();

        if(Hours < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Hours == 2)
        {
            Charges = 20;
        }
        else if(Hours > 2 && Hours < 10)
        {
            Charges = 20 + ((Hours - 2) * 10);
        }
        else
        {
            Charges = 20 + ((Hours - 2) * 10) + 50;
        }

        System.out.println("Total Parking Duration : " + Hours + " hours");
        System.out.println("Total Parking Fee      : " + Charges);

        sobj.close();
    }
}