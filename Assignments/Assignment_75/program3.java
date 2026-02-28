/*

A warehouse has a product in stock. Every time a customer places an order, the system must check if enough
stock exists.
If possible, fulfill it and update remaining stock. If stock becomes very low, show alert.

Rules:
    • If requested quantity > available stock → order fails
    • Else deduct quantity
    • If remaining stock < 5 → print low stock alert

Input:
    • Current stock (integer)
    • Requested quantity (integer)

Validations:
    • Stock cannot be negative
    • Requested quantity must be > 0

Expected Output:
    If successful:
    Order Processed Successfully.
    Remaining Stock: <value>
    If remaining < 5 also print: Low Stock Alert!
    If failed: Order Failed: Insufficient Stock.

*/

import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Stock = 0;
        int Quantity = 0;

        System.out.println("Enter current stock : ");
        Stock = sobj.nextInt();

        System.out.println("Enter Request Quantity : ");
        Quantity = sobj.nextInt();

        if(Stock < 0 || Quantity < 0)
        {
            System.out.println("Invalid Input : Stock or quantity must be positive");
            return;
        }

        if(Quantity > Stock)
        {
            System.out.println("Order Fails : Insufficient Stock");
            return;
        }
        else
        {
            Stock = Stock - Quantity;
        }

        System.out.println("Order Processed Successfully");
        System.out.println("Remaining Stock : "+ Stock);

        if(Stock < 5)
        {
            System.out.println("Low Stock Alert !");
        }

        sobj.close();
    }
}