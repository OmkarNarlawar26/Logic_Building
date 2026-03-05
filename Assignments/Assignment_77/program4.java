/*

Water Bill with Progressive Slabs + Late Fee
Slabs + fixed meter charge. If paid after due date, add 2% penalty per week late (max 10%).

Input: units, weeksLate

Output: billAmount

*/

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int WeeksLate = 0;

        System.out.println("Enter Water units : ");
        Units = sobj.nextInt();

        System.out.println("Enter Week Late : ");
        WeeksLate = sobj.nextInt();

        if(Units < 0 || WeeksLate < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        double Bill = 0;

        if(Units <= 100)
        {
            Bill = Units * 5;
        }
        else if(Units <= 300)
        {
            Bill = (100 * 5) + ((Units - 100) * 10);
        }
        else
        {
            Bill = (100 * 5) + (200 * 10) + ((Units - 300) * 15);
        }

        Bill = Bill + 100;  // Fix meter Charge

        double PenaltyPercent;
        PenaltyPercent = WeeksLate * 2;

        if(PenaltyPercent > 10)
        {
            PenaltyPercent = 10;
        }

        double Penalty = 0;
        Penalty = Bill * (Penalty / 100);

        Bill = Bill + Penalty;

        System.out.println("Units Consumed     : " + Units);
        System.out.println("Fixed Meter Charge : 100");
        System.out.println("Late Penalty       : " + PenaltyPercent + "%");
        System.out.println("Total Bill Amount  : " + Bill);

        sobj.close();
    }
}