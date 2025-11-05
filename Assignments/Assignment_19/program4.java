// write a program to print each digit os a number separetely.

class Logic
{
    void printDigits(int num)
    {
        int digit;
        while(num > 0)
        {
            digit = num % 10;          
            System.out.println(digit);
            num = num / 10;
        }
    }
}

class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}