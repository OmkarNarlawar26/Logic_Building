/*

Design a Java application to manage cinema hall seating using a 2D array.
The cinema hall has:
• Rows representing seat rows
• Columns representing seats in each row
Each seat is represented as:
• 0 → Empty
• 1 → Booked

Requirements:
Your program must:
1. Count total booked seats.
2. Find row with maximum bookings.
3. Check if any row is completely full.
4. Display seat matrix.

Input Format:
• First line: Integer R (rows)
• Second line: Integer C (columns)
• Next R lines: C integers (0 or 1)

Validations:
• R > 0
• C > 0
• Matrix values must be 0 or 1 only

Output Format:
Total Booked Seats: <count>
Row With Maximum Bookings: Row <number>
Full Row Exists: Yes/No

Sample Input:
3
4
1 0 1 1
1 1 1 1
0 0 1 0

Sample Output:

Total Booked Seats: 8
Row With Maximum Bookings: Row 2
Full Row Exists: Yes

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows in Theatre : ");
        int R = sobj.nextInt();

        System.out.println("Enter number of Columns in Theatre : ");
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Seats[][] = new int[R][C];
        int i = 0, j = 0;

        System.out.println("Enter booking Details (0/1)");
        
        for(i = 0; i < R; i++)
        {
            System.out.println("Enter Details of Row : "+ (i+1));
            for(j = 0; j < C; j++)
            {
                Seats[i][j] = sobj.nextInt();

                if(Seats[i][j] != 0 && Seats[i][j] != 1)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        int TotalBooked = 0;
        int MaxBookedInRow = 0;
        int RowWithMax = 0;
        boolean FullRowExist = false;
        int RowBooked = 0;

        for(i = 0; i < R; i++)
        {
            RowBooked = 0;
            for(j = 0; j < C; j++)
            {
                if(Seats[i][j] == 1)
                {
                    TotalBooked++;
                }

                RowBooked = RowBooked + Seats[i][j];
            }

            if(RowBooked > MaxBookedInRow)
            {
                MaxBookedInRow = RowBooked;
                RowWithMax = i;
            }

            if(RowBooked == C)
            {
                FullRowExist = true;
            }
        }

        System.out.println("Total Booked seats        : "+TotalBooked);
        System.out.println("Row with Maximum Bookings : "+(RowWithMax + 1));
        System.out.println("Full row exist            : "+(FullRowExist ? "Yes" : "No"));

        System.out.println("Seat Layout of theater");
        
        for(i = 0; i < R; i++)
        {
            for(j = 0; j < C; j++)
            {
                System.out.print("\t" + ((Seats[i][j] == 1) ? "BOOK" : "FREE"));
            }
            System.out.println();
        }
    }
}

