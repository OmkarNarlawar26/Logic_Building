/*

Design a Java application to analyze electricity consumption of multiple cities over a week.
• Rows represent cities.
• Columns represent 7 days of the week.
Each cell contains units consumed on that day.

Requirements:
Your program must:
1. Calculate total weekly consumption for each city.
2. Identify city with highest consumption.
3. Identify the day with maximum overall consumption.
4. Print cities that consumed more than 500 units in a week.

Input Format:
• First line: Integer N (number of cities)
• Next N lines: 7 integers each (units per day)

Validations:
• N > 0
• Units cannot be negative

Output Format:
Weekly Consumption:
City 1: <units>
City 2: <units>
...
Highest Consumption: City <number>
Peak Consumption Day: Day <number>

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of cities : ");
        int N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Arr[][] = new int[N][7];
        int i = 0, j = 0, no = 0;

        System.out.println("Enter Electricity Consumption of each City : ");

        for(i = 0; i < N; i++)
        {
            System.out.println("Enter Consumption of City : " + (i+1));

            for(j = 0; j < 7; j++)
            {
                no = sobj.nextInt();

                if(no < 0)
                {
                    System.out.println("Invalid Input");
                    return;
                }

                Arr[i][j] = no;
            }
        }

        int Weekly[] = new int[7];
        int HighestCity = 0;
        int MaxWeekly = 0;

        int PeekDay = 0;
        int MaxDayTotal = 0;
        int Sum = 0;

        // Weekly Total + Highest Consumption
        for(i = 0; i < N; i++)
        {
            Sum = 0;

            for(j = 0; j < 7; j++)
            {
                Sum = Sum + Arr[i][j];
            }

            Weekly[i] = Sum;

            if(Sum > MaxWeekly)
            {
                MaxWeekly = Sum;
                HighestCity = i;
            }
        }

        System.out.println("Highest Consumption : City "+ HighestCity);
        System.out.println("highest Consumption : "+ MaxWeekly);

        // Day with maximum consumption

        int DaySum = 0;
        int Day = 0;

        for(Day = 0; Day < 7; Day++)
        {
            DaySum = 0;

            for(i = 0; i < N; i++)
            {
                DaySum = DaySum + Arr[i][Day];
            }

            if(DaySum > MaxDayTotal)
            {
                MaxDayTotal = DaySum;
                PeekDay = Day;
            }
        }

        String DayName[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

        System.out.println("Peak consumption day      : "+ PeekDay);
        System.out.println("Peak consumption day Name : "+ DayName[PeekDay]);

        System.out.println("Weekly Consumption : ");

        for(i = 0; i < N; i++)
        {
            System.out.println("City : "+ (i+1) + " : "+ Weekly[i]);
        }

        // Cities more than 500 consumption

        System.out.println("Cities more than 500 consumption : ");

        for(i = 0; i < N; i++)
        {
            if(Weekly[i] > 500)
            {
                System.out.println("City : "+ (i+1));
            }
        }

        sobj.close();
    }
}

