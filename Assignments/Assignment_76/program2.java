/*

A scholarship committee uses a strict checklist. Only students who meet all academic and financial conditions
qualify.

Conditions:
    • Marks ≥ 80%
    • Attendance ≥ 75%
    • Family income ≤ ₹3,00,000

Input:
    • Marks percent (integer)
    • Attendance percent (integer)
    • Family income (integer)

Validations:
    • Marks and attendance must be 0–100
    • Income cannot be negative

Expected Output:
    Scholarship Approved
    OR
    Scholarship Rejected: <Reason>

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Marks = 0;
        int Attendence = 0;
        int Income = 0;

        System.out.println("Marks Percent : ");
        Marks = sobj.nextInt();

        System.out.println("Atteendence Percent : ");
        Attendence = sobj.nextInt();

        System.out.println("Family Income : ");
        Income = sobj.nextInt();

        if(Marks < 0 && Marks > 100)
        {
            System.out.println("Invalid Marks : Marks must in between 0 - 100");
            return;
        }

        if(Attendence < 0 && Attendence > 100)
        {
            System.out.println("Invalid Attendence : Attendence must in between 0 - 100");
            return;
        }

        if(Income < 0)
        {
            System.out.println("Invalid Input : Income cannot be negative");
            return;
        }

        if(Marks >= 80 && Attendence >= 75 && Income <= 300000)
        {
            System.out.println("Scholarship Approved");
        }
        else
        {
            System.out.print("Scholarship Rejected: ");

            if(Marks < 80)
            {
                System.out.print("Marks less than 80%. ");
            }

            if(Attendence < 75)
            {
                System.out.print("Attendance less than 75%. ");
            }

            if(Income > 300000)
            {
                System.out.print("Family income exceeds ₹3,00,000.");
            }
        }

        sobj.close();
    }
}