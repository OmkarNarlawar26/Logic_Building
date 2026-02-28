/*

A bank wants to quickly decide whether a customer is eligible for a personal loan.
The system checks the applicant’s details and either approves the loan or rejects with the exact reason.

Eligibility Conditions:
    • Age 21 to 60 inclusive
    • Monthly income ≥ ₹25,000
    • Credit score ≥ 700
    • Must NOT have an existing unpaid loan

Input:
    • Age
    • Monthly income
    • Credit score
    • Existing unpaid loan (Yes/No)

Validations:
    • Age/income/score must be non-negative
    • Yes/No must be valid

Expected Output:
    Loan Approved
    OR
    Loan Rejected: <Specific Reason>

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Age = 0;
        int MonthlyIncome = 0;
        int CreditScore = 0;
        String Loan = null;

        System.out.print("Enter Age : ");
        Age = sobj.nextInt();

        System.out.print("Enter Monthly Income : ");
        MonthlyIncome = sobj.nextInt();

        System.out.print("Enter Credit Score : ");
        CreditScore = sobj.nextInt();

        System.out.print("Existing unpaid loan (Yes/No) : ");
        Loan = sobj.next();

        if(Age < 0 || MonthlyIncome < 0 || CreditScore < 0)
        {
            System.out.println("Invalid Input : Values cannot be negative.");
            return;
        }

        if(!((Loan.equalsIgnoreCase("Yes")) || (Loan.equalsIgnoreCase("No"))))
        {
            System.out.println("Invalid Input: Enter Yes or No only.");
            return;
        }

        if(Age < 21 || Age > 60)
        {
            System.out.println("Loan Rejected: Age must be between 21 and 60.");
        }
        else if(MonthlyIncome < 25000)
        {
            System.out.println("Loan Rejected: Monthly income must be at least ₹25000.");
        }
        else if(CreditScore < 700)
        {
            System.out.println("Loan Rejected: Credit score must be at least 700.");
        }
        else if(Loan.equalsIgnoreCase("Yes"))
        {
            System.out.println("Loan Rejected: Existing unpaid loan detected.");
        }
        else
        {
            System.out.println("Loan Approved");
        }

        sobj.close();
    }
}