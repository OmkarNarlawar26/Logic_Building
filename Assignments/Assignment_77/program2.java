/*

Base fare depends on distance slabs. Add charges for class (Sleeper/3AC/2AC). If booking within 24 hours, add
Tatkal 30%. Senior citizen gets 40% discount.

Input: distance, classType, bookingHoursBefore, age

Output: finalFare + reason breakdown

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Distance = 0;
        int Hour = 0;
        int Age = 0;

        String ClassType = null;

        System.out.println("Enter Distance in km : ");
        Distance = sobj.nextInt();

        System.out.println("Enter Booking Hours Before : ");
        Hour = sobj.nextInt();

        System.out.println("Enter Age : ");
        Age = sobj.nextInt();

        System.out.println("Enter Class Type : (Sleeper/3AC/2AC)");
        ClassType = sobj.next();

        if(Distance < 0 || Age < 0 || Hour < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(!(ClassType.equalsIgnoreCase("Sleeper") || ClassType.equalsIgnoreCase("3AC") || ClassType.equalsIgnoreCase("2AC")))
        {
            System.out.println("Invalid Class Type");
            return;
        }

        double BaseFare = 0.0;

        if(Distance <= 100)
        {
            BaseFare = Distance * 1;
        }
        else if(Distance <= 500)
        {
            BaseFare = Distance * 2;
        }
        else
        {
            BaseFare = Distance * 3;
        }

        int ClassCharges = 0;

        if(ClassType.equalsIgnoreCase("Sleeper"))
        {
            ClassCharges = 100;
        }
        else if(ClassType.equalsIgnoreCase("3AC"))
        {
            ClassCharges = 500;
        }
        else
        {
            ClassCharges = 1000;
        }

        Double TotalFare = 0.0;
        TotalFare = BaseFare + ClassCharges;

        double Tatkal = 0.0;

        if(Hour <= 24)
        {
            Tatkal = TotalFare * 0.3;
            TotalFare = TotalFare + Tatkal;
        }

        double Discount = 0;

        if(Age >= 60)
        {
            Discount = (TotalFare * 0.4);
            TotalFare = TotalFare - Discount;
        }

        System.out.println("Base Fare       : " + BaseFare);
        System.out.println("Class Charges   : " + ClassCharges);
        System.out.println("Tatkal Charges  : " + Tatkal);
        System.out.println("Senior Discount : " + Discount);

        System.out.println("Final Fare      : " + TotalFare);

        sobj.close();
    }
}