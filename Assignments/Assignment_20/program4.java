// write a program to find the largest digit in a given number

class Logic
{
    void findLargestDigit(int num)
    {
        int Digit = 0;
        int LDigit = 0;

        while(num != 0)
        {
            Digit = num % 10;
            num = num / 10;

            if(Digit > LDigit)
            {
                LDigit = Digit;
            }
        }
        System.out.println(LDigit);
    }
}

class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}