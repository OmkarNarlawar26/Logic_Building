/*

A fitness app records steps for 7 days. It wants to show how many days user achieved the goal and what the
highest step count was.

Input:
    • 7 integers (steps)

Validations:
    • Steps must be ≥ 0

Expected Output:
    Goal Achieved Days: <count>
    Maximum Steps in Week: <value>

*/

import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[7];
        int GoalAchieved = 0;
        int MaxSteps = 0;
        int Goal = 10000;

        System.out.println("Enter steps for 7 days : ");

        for(int i = 0; i < 7; i++)
        {
            Arr[i] = sobj.nextInt();

            if(Arr[i] < 0)
            {
                System.out.println("Invalid Input");
                sobj.close();
                return;
            }

            if(Arr[i] >= Goal)
            {
                GoalAchieved++;
            }

            if(Arr[i] > MaxSteps)
            {
                MaxSteps = Arr[i];
            }
        }

        System.out.println("Goal Achieved Days    : " + GoalAchieved);
        System.out.println("Maximum Steps in Week : " + MaxSteps);

        sobj.close();
    }
}