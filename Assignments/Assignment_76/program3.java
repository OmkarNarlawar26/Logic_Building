/*

A courier counter calculates delivery charge by weight. Charges increase when parcel is heavier.

Charges:
    • Up to 1 kg → ₹50
    • 1–5 kg → ₹50 + ₹20/kg above 1 kg
    • Above 5 kg → ₹150 + ₹30/kg above 5 kg

Input:
    • Parcel weight in kg (integer)

Validations:
    • Weight must be > 0

Expected Output:
    Parcel Weight: <weight> kg
    Courier Charge: ₹<amount>

*/

import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Weight = 0;
        int Charges = 0;

        System.out.println("Parcel weight in kg : ");
        Weight = sobj.nextInt();

        if(Weight < 0)
        {
            System.out.println("Invalid Input : Weight must be greater than 0");
        }

        if(Weight <= 1)
        {
            Charges = 50;
        }
        else if(Weight <= 5)
        {
            Charges = 50 + ((Weight - 1) * 20);
        }
        else
        {
            Charges = 150 + ((Weight - 5) * 30);
        }

        System.out.println("Parcel Weight  : " + Weight + " kg");
        System.out.println("Courier Charge : " + Charges);

        sobj.close();
    }
}