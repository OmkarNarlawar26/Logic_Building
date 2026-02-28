/*

4. A traffic police app records whether a rider violated rules. Each violation has a fixed fine.
If multiple violations happen, fines should be added.

Fines:
    • No helmet → ₹500
    • No license → ₹1000
    • Overspeeding → ₹1500

Input:
    • Helmet worn (Yes/No)
    • License available (Yes/No)
    • Overspeeding (Yes/No)

Validations:
    • Inputs must be Yes/No only

Expected Output:
    Total Fine Amount: ₹<amount>

*/

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String Helmet = null;
        String Licence = null;
        String Overspeeding = null;

        System.out.println("Helmet Wore : (Yes/No)");
        Helmet = sobj.next();

        System.out.println("Licence Available : (Yes/No)");
        Licence = sobj.next();

        System.out.println("Overspeeding : (Yes/No)");
        Overspeeding = sobj.next();

        if
        (
            !((Helmet.equalsIgnoreCase("Yes")) || (Helmet.equalsIgnoreCase("No"))) ||
            !((Licence.equalsIgnoreCase("Yes")) || (Licence.equalsIgnoreCase("No"))) ||
            !((Overspeeding.equalsIgnoreCase("Yes")) || (Overspeeding.equalsIgnoreCase("No")))
        )
        {
            System.out.println("Invalid Input : Input must be (Yes/No)");
            return;
        }

        int Amount = 0;

        // if(Helmet.equalsIgnoreCase("No") && Licence.equalsIgnoreCase("No") && Overspeeding.equalsIgnoreCase("Yes"))
        // {
        //     Amount = 500 + 1000 + 1500;
        // }
        // else if(Helmet.equalsIgnoreCase("No") && Licence.equalsIgnoreCase("No"))
        // {
        //     Amount = 500 + 1000;
        // }
        // else if(Licence.equalsIgnoreCase("No") && Overspeeding.equalsIgnoreCase("Yes"))
        // {
        //     Amount = 1000 + 1500;
        // }
        // else if(Helmet.equalsIgnoreCase("No") && Overspeeding.equalsIgnoreCase("Yes"))
        // {
        //     Amount = 500 + 1500;
        // }
        // else if(Helmet.equalsIgnoreCase("No"))
        // {
        //     Amount = 500;
        // }
        // else if(Licence.equalsIgnoreCase("No"))
        // {
        //     Amount = 1000;
        // }
        // else if(Overspeeding.equalsIgnoreCase("Yes"))
        // {
        //     Amount = 1500;
        // }

        if(Helmet.equalsIgnoreCase("No"))
        {
            Amount = Amount + 500;
        }

        // No License
        if(Licence.equalsIgnoreCase("No"))
        {
            Amount = Amount + 1000;
        }

        // Overspeeding
        if(Overspeeding.equalsIgnoreCase("Yes"))
        {
            Amount = Amount + 1500;
        }


        System.out.println("Total Fine amount : "+ Amount);

        sobj.close();
    }
}