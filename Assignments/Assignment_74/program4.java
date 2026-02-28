/*
An electricity company bills customers monthly based on how many units they consumed.
The billing is progressive, meaning units are charged in slabs.
The company wants a program to calculate bill accurately for any consumption.

Slabs:
    • First 100 units → ₹5 per unit
    • Next 100 units (101–200) → ₹7 per unit
    • Above 200 units → ₹10 per unit

Input:
    • One integer: units consumed

Validations:
    • Units cannot be negative

Expected Output:
    Total Units Consumed: <units>
    Total Electricity Bill: ₹<amount>
*/

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int Amount = 0;

        System.out.println("Enter Units Consumed : ");
        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println("units cannot be negative");
            return;
        }

        // if(Units >= 1 && Units <= 100)
        // {
        //     Amount = Units * 5;
        // }
        // else if(Units >= 101 && Units <= 200)
        // {
        //     Amount = (100 * 5) + ((Units - 100) * 7);
        // }
        // else if(Units > 200)
        // {
        //     Amount = (100 * 5) + ((200 - 100) * 7) + ((Units - 200) * 10);
        // }

        if(Units <= 100)
        {
            Amount = Units * 5;
        }
        else if(Units <= 200)
        {
            Amount = 500 + ((Units - 100) * 7);
        }
        else
        {
            Amount = 500 + 700 + ((Units - 200) * 10);
        }

        System.out.println("Total Units Consumed : "+ Units);
        System.out.println("Total Electricity Bill : "+ Amount);

        sobj.close();
    }
}