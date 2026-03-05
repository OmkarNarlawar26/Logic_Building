/*

An online election system stores votes by voter ID. Every voter can vote only once. If the same ID appears again,
the vote must be rejected and counted as duplicate.

Input:
    • Number of votes N
    • N voter IDs

Validations:
    • N ≥ 0
    • IDs must be non-negative integers

Expected Output:
    Valid Votes: <count>
    Rejected Duplicate Votes: <count>

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = 0;

        System.out.print("Enter number of Votes : ");
        N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        HashSet<Integer> hobj = new HashSet<>();

        int ValidVotes = 0;
        int DuplicateVotes = 0;

        System.out.println("Enter Voter IDs : ");

        for(int i = 0; i < N; i++)
        {
            int ID = sobj.nextInt();

            if(ID < 0)
            {
                System.out.println("Invalid Voter ID");
                i--;        // take input again
                continue;
            }

            if(hobj.add(ID))
            {
                ValidVotes++;
            }
            else
            {
                DuplicateVotes++;
            }
        }

        System.out.println("Valid Votes              : " + ValidVotes);
        System.out.println("Rejected Duplicate Votes : " + DuplicateVotes);

        sobj.close();
    }
}