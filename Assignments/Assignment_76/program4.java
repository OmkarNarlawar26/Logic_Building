/*

A customer enters a store with a fixed budget. They pick items one by one in a given order.
The cashier wants to know how many items can be purchased before money becomes insufficient.

Input:
    • Budget amount
    • Number of items N
    • N item prices

Validations:
    • Budget ≥ 0
    • N ≥ 0
    • Each price > 0

Expected Output:
    Items Purchased: <count>
    Remaining Balance: ₹<amount>

*/

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Budget = 0;
        int N = 0;

        System.out.print("Enter Budget Amount : ");
        Budget = sobj.nextInt();

        if(Budget < 0)
        {
            System.out.println("Budget must be greater than or equal to 0");
            return;
        }

        System.out.print("Enter Number of Items : ");
        N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Number of items cannot be negative");
            return;
        }

        int Count = 0;
        int Price = 0;

        System.out.println("Enter Item Prices :");

        for(int i = 1; i <= N; i++)
        {
            Price = sobj.nextInt();

            if(Price <= 0)
            {
                System.out.println("Item price must be greater than 0");
                return;
            }

            if(Budget >= Price)
            {
                Budget = Budget - Price;
                Count++;
            }
            else
            {
                break;
            }
        }

        System.out.println("Items Purchased   : " + Count);
        System.out.println("Remaining Balance : " + Budget);


        sobj.close();
    }
}