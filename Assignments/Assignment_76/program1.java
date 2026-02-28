/*

A ride-hailing app calculates trip fare based on distance and whether the trip happened during peak hours.
Peak hours increase demand, so surcharge applies.

Rules:
    • Base fare ₹50
    • First 10 km → ₹12 per km
    • Beyond 10 km → ₹15 per km
    • Peak hours → 20% extra on total fare

Input:
    • Distance in km (integer)
    • Peak hour (Yes/No)

Validations:
    • Distance cannot be negative

Expected Output:
    Distance: <km> km
    Peak Hour: <Yes/No>
    Total Fare: ₹<amount>

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Distance = 0;
        double TotalFare = 0.0;
        String Peak = null;

        System.out.println("Distance in km : ");
        Distance = sobj.nextInt();

        System.out.println("Peak hour : (Yes/No)");
        Peak = sobj.next();

        if(Distance < 0)
        {
            System.out.println("Invalid Input : Distance cannot be negative");
            return;
        }

        if(!(Peak.equalsIgnoreCase("Yes") || Peak.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid Input : Input should in Yes or No only");
            return;
        }

        TotalFare = 50.0;

        if(Distance <= 10)
        {
            TotalFare = TotalFare + (Distance * 12);
        }
        else
        {
            TotalFare = TotalFare + ((10 * 12) + ((Distance - 10) * 15));
        }

        if(Peak.equalsIgnoreCase("Yes"))
        {
            TotalFare = TotalFare + (TotalFare * 0.20);
        }

        System.out.println("Distance   : "+Distance);
        System.out.println("Peak Hour  : "+Peak);
        System.out.println("Total Fare : "+TotalFare);

        sobj.close();
    }
}