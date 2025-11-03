// Write a program to check whether a number is a number is palindrome or not.

class Logic
{
    void findMax(int a, int b)
    {

        if(a > b)
        {
        System.out.print("a is Maximum");
        }
        else
        {
            System.out.print("b is Maximum");
        }
    }
}

class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }

}