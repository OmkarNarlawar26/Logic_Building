// Write a program to check whether a number is a number is palindrome or not.

class Logic
{
    void findMin(int a, int b, int c)
    {

        if((a < b) && (a < c))
        {
        System.out.print("a is Minimum");
        }
        else if((b < a) && (b < c))
        {
            System.out.print("b is Minimum");
        }
        else
        {
            System.out.print("c is Minimum");
        }
    }
}

class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }

}