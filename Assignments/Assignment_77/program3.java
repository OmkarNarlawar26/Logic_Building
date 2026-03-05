/*

User enters usage: calls(min), data(GB), SMS(count). App suggests the cheapest plan among 4 plans.

Input: mins, gb, sms

Output: recommendedPlan, totalCost

Twist: if usage exceeds plan limits, add per-unit extra

*/

import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Mins = 0;
        int Gb = 0;
        int Sms = 0;

        System.out.println("Enter Minutes : ");
        Mins = sobj.nextInt();

        System.out.println("Enter gb : ");
        Gb = sobj.nextInt();

        System.out.println("Enter sms : ");
        Sms = sobj.nextInt();

        if(Mins < 0 || Gb < 0 || Sms < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        double costA = 199;
        double costB = 399;
        double costC = 599;
        double costD = 999;


        if(Mins > 100)
            costA = costA + (Mins - 100) * 1;

        if(Gb > 2)
            costA = costA + (Gb - 2) * 10;

        if(Sms > 100)
            costA = costA + (Sms - 100) * 0.5;


        if(Mins > 300)
            costB = costB + (Mins - 300) * 1;

        if(Gb > 5)
            costB = costB + (Gb - 5) * 10;

        if(Sms > 300)
            costB = costB + (Sms - 300) * 0.5;


        if(Mins > 600)
            costC = costC + (Mins - 600) * 1;

        if(Gb > 10)
            costC = costC + (Gb - 10) * 10;

        if(Sms > 500)
            costC = costC + (Sms - 500) * 0.5;


        if(Gb > 20)
            costD = costD + (Gb - 20) * 10;

        double minCost = costA;
        String plan = "Plan A";

        if(costB < minCost)
        {
            minCost = costB;
            plan = "Plan B";
        }

        if(costC < minCost)
        {
            minCost = costC;
            plan = "Plan C";
        }

        if(costD < minCost)
        {
            minCost = costD;
            plan = "Plan D";
        }

        System.out.println("Recommended Plan : " + plan);
        System.out.println("Total Cost       :  " + minCost);

        sobj.close();
    }
}