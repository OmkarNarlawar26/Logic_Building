/*

A telecom company bills calls based on duration slabs. The system needs to calculate final charge for a given call
duration.

Rules:
    • First 5 minutes free
    • Next 10 minutes (6–15) → ₹1 per minute
    • Beyond 15 → ₹2 per minute

Input:
    • Call duration in minutes (integer)

Validations:
    • Minutes must be ≥ 0

Expected Output:
    Call Duration: <minutes> minutes
    Total Call Charge: ₹<amount>

*/

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Minutes = 0;
        int Charges = 0;

        System.out.print("Enter Call Duration (in minutes): ");
        Minutes = sobj.nextInt();

        if(Minutes < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        if(Minutes <= 5)
        {
            Charges = 0;
        }
        else if(Minutes <= 15)
        {
            Charges = (Minutes - 5) * 1;
        }
        else
        {
            Charges = (10 * 1) + ((Minutes - 15) * 2);
        }

        System.out.println("Call Duration     : " + Minutes + " minutes");
        System.out.println("Total Call Charge : " + Charges);

        sobj.close();
    }
}