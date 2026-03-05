/*

A hospital bill includes consultation + medicine + room charges per day. If insured, insurance covers up to
₹50,000 or 70% of bill (whichever is lower). ICU ward costs extra.

Input: days, wardType(Normal/ICU), medicineBill, consultationFee, insured(Yes/No)

Output: totalBill, insuranceCover, finalPay

Validations: all non-negative, wardType valid

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Days = 0;
        int MedicineBill = 0;
        int ConsultationFee = 0;
        String WardType = null;
        String Insured = null;

        System.out.println("Enter number of Days : ");
        Days = sobj.nextInt();

        System.out.println("Enter Ward Type : (Normal/ICU)");
        WardType = sobj.next();

        System.out.println("Enter Medicine Bill : ");
        MedicineBill = sobj.nextInt();

        System.out.println("Enter Consultance Fees : ");
        ConsultationFee = sobj.nextInt();

        System.out.println("Insured ? : (Yes/No)");
        Insured = sobj.next();

        if(Days < 0 || MedicineBill < 0 || ConsultationFee < 0)
        {
            System.out.println("Invalid Input : Values must be non-negative");
            return;
        }

        if(!(WardType.equalsIgnoreCase("Normal") ||
             WardType.equalsIgnoreCase("ICU")))
        {
            System.out.println("Invalid Ward Type");
            return;
        }

        if(!(Insured.equalsIgnoreCase("Yes") ||
             Insured.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid Insurance Input");
            return;
        }

        double RoomChargePerDay = 0;

        if(WardType.equalsIgnoreCase("Normal"))
        {
            RoomChargePerDay = 2000;
        }
        else if(WardType.equalsIgnoreCase("ICU"))
        {
            RoomChargePerDay = 5000; // ICU Extra Cost
        }

        double RoomCharges = Days * RoomChargePerDay;

        double TotalBill = RoomCharges + MedicineBill + ConsultationFee;

        double InsuranceCover = 0;

        if(Insured.equalsIgnoreCase("Yes"))
        {
            double seventyPercent = TotalBill * 0.70;

            if(seventyPercent < 50000)
            {
                InsuranceCover = seventyPercent;
            }
            else
            {
                InsuranceCover = 50000;
            }
        }

        double FinalPay = TotalBill - InsuranceCover;

        System.out.println("Total Bill      : " + TotalBill);
        System.out.println("Insurance Cover : " + InsuranceCover);
        System.out.println("Final Pay       : " + FinalPay);

        sobj.close();
    }
}
