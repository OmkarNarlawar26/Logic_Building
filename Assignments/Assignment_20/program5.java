// write a program to find the smallest digit in a given number

class Logic
{
    void findSmallestDigit(int num)
    {
        int Digit = 0;
        int SDigit = 9;

        while(num != 0)
        {
            Digit = num % 10;
            num = num / 10;

            if(Digit < SDigit)
            {
                SDigit = Digit;
            }
        }
        System.out.println(SDigit);
    }
}

class program5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}