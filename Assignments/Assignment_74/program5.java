/*

An e-commerce platform wants to compute final payable amount at
checkout.
Discounts are based on purchase amount, and premium members receive an
extra discount after the main discount.

Discount Rules:
    • Amount > 5000 → 20% discount
    • Amount > 2000 → 10% discount
    • Otherwise → no discount
    • Premium members → extra 5% discount on the discounted amount

Input:
    • Purchase amount (integer)
    • Membership type: Premium/Regular

Validations:
    • Amount must be > 0
    • Membership must be valid

Expected Output:
    Original Amount: ₹<amount>
    Total Discount: ₹<discount>
    Final Payable Amount: ₹<finalAmount>

*/

import java.util.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Amount = 0;

        float DiscountAmount = 0.0f;
        float FinalAmount = 0.0f;
        String MembershipType = null;

        System.out.println("Enter Purchase Amount : ");
        Amount = sobj.nextInt();

        System.out.println("Enter type of Membership : (Premium/Regular)");
        MembershipType = sobj.next();

        if
        (
            (Amount < 0) ||
            ((MembershipType.equalsIgnoreCase("Premium") == false) &&
            (MembershipType.equalsIgnoreCase("Regular") == false))
        )
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Amount > 5000)       // 20%
        {
            DiscountAmount = ((float)Amount * 0.2f);
        }
        else if(Amount > 2000)  // 10%
        {
            DiscountAmount = ((float)Amount * 0.1f);
        }
        else                    // 0%
        {
            DiscountAmount = 0.0f;
        }

        FinalAmount = Amount - DiscountAmount;
        if(MembershipType.equalsIgnoreCase("Premium"))
        {
            DiscountAmount = DiscountAmount + (FinalAmount * 0.05f);
            FinalAmount = Amount - DiscountAmount;
        }

        System.out.println("Original Amount      : "+ Amount);
        System.out.println("Total Discount       : "+ DiscountAmount);
        System.out.println("Final Payable amount : "+ FinalAmount);
        
        sobj.close();
    }
}