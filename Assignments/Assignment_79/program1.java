/*

Design a Java application that analyzes student performance using a 2D matrix.
A college stores marks of students in multiple subjects using a matrix:
• Rows represent students.
• Columns represent subjects.
Your program must analyze academic performance based on this matrix.

Requirements:
Your program should:
1. Calculate total marks of each student.
2. Identify the topper (student with highest total).
3. Calculate average marks for each subject.
4. Print students who failed in any subject (marks < 35).

Input Format:
• First line: Integer N (number of students)
• Second line: Integer M (number of subjects)
• Next N lines: M integers each (marks of each student)

Validations:
• N > 0
• M > 0
• Each mark must be between 0 and 100
If invalid input is found, print:

Invalid Input

Output Format:
Student Totals:
Student 1: <total>
Student 2: <total>
...
Topper: Student <index>
Subject Averages:
Subject 1: <avg>
Subject 2: <avg>
...
Students Failed:
<Student numbers>

Sample Input:

3
3
80 70 60
90 85 88
30 40 50
Sample Output:

Student Totals:

Student 1: 210
Student 2: 263
Student 3: 120

Topper: Student 2

Subject Averages:
Subject 1: 66.67
Subject 2: 65.00
Subject 3: 66.00

Students Failed:
Student 3

*/

import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of students : ");
        int N = sobj.nextInt();

        System.out.println("Enter number of Subjects : ");
        int M = sobj.nextInt();

        if(N <= 0 || M <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Marks[][] = new int[N][M];
        int i = 0, j = 0, no = 0;

        System.out.println("Enter Marks of each student : ");


        for(i = 0; i < N; i++)
        {
            System.out.println("Enter Marks of student : " + (i+1));

            for(j = 0; j < M; j++)
            {
                no = sobj.nextInt();

                if(no < 0  && no > 100)
                {
                    System.out.println("Invalid Input");
                    return;
                }

                Marks[i][j] = no;
            }
        }

        int Subjects[] = new int[M];
        int Sum = 0;

        System.out.println("Student Totals :");
        for(i = 0; i < N; i++)
        {
            Sum = 0;

            for(j = 0; j < M; j++)
            {
                Sum = Sum + Marks[i][j];
            }

            System.out.println("Student " + (i + 1) + " : " +Sum);
        }

        int MaxTotal = 0;
        int Topper = 0;

        System.out.print("\nTopper : ");
        for(i = 0; i < N; i++)
        {
            Sum = 0;

            for(j = 0; j < M; j++)
            {
                Sum = Sum + Marks[i][j];
            }

            if(Sum > MaxTotal)
            {
                MaxTotal = Sum;
                Topper  = i;
            }
        }

        System.out.println("Student "+ (Topper + 1));

        System.out.println("\nSubject Average : ");
        for(j = 0; j < M; j++)
        {
            Sum = 0;

            for(i = 0; i < N; i++)
            {
                Sum = Sum + Marks[i][j];
            }

            double Average = (double)Sum / N;
            System.out.printf("Subject %d : %f\n", (j+1), Average);
        }

        System.out.println("\nStudents Failed:");

        boolean found = false;

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                if(Marks[i][j] < 35)
                {
                    System.out.println("Student " + (i+1));
                    found = true;
                    break;
                }
            }
        }

        if(!found)
        {
            System.out.println("None");
        }

        sobj.close();
    }
}