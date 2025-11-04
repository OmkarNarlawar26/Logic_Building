// Write a program to check whether a number is positive, negative, or zero.

class Logic
{
    void checkSign(int num)
    {
        if(num < 0)
        {
            System.out.println("Negative");
        }
        else if(num > 0)
        {
            System.out.println("Positive");
        }
        else
        {
            System.out.println("zero");
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}