import java.util.*;

class program800
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Amount = 0;

        float DiscountAmount = 0.0f;
        float FinalAmount = 0.0f
        ;
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