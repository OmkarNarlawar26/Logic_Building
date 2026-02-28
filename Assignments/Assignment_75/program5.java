/*

A tax portal calculates income tax based on annual income using progressive slabs. Only the amount in a slab is taxed at that slab’s rate.

Slabs:
    • Up to ₹2,50,000 → 0%
    • ₹2,50,001 to ₹5,00,000 → 5%
    • ₹5,00,001 to ₹10,00,000 → 20%
    • Above ₹10,00,000 → 30%

Input:
    • Annual income (integer)

Validations:
    • Income cannot be negative

Expected Output:
    Annual Income: ₹<income>
    Total Tax Payable: ₹<tax>

*/

import java.util.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Income = 0;

        System.out.println("Enter Annual Income : ");
        Income = sobj.nextInt();

        if(Income < 0)
        {
            System.out.println("Invalid Input : Incom cannot be negative");
            return;
        }

        double Tax = 0.0;

        if(Income > 1000000)
        {
            Tax = Tax + (Income - 1000000) * 0.30;
            Income = 1000000;
        }
        
        if(Income > 500000)
        {
            Tax = Tax + (Income - 500000) * 0.20;
            Income = 500000;
        }

        if(Income > 250000)
        {
            Tax = Tax + (Income - 250000) * 0.05;
            Income = 250000;
        }

        System.out.println("Annual Income     : "+Income);
        System.out.println("Total Tac Payable : "+ (double)Tax);
        
        sobj.close();
    }
}