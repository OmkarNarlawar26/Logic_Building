// write a program to calculate the product of digits os a number

class Logic
{
    void productOfDigits(int num)
    {
        int Digit = 0;
        int product = 1;

        while(num != 0)
        {
            Digit = num % 10;
            num = num / 10;

            product = product * Digit;
        }
        System.out.println(product);
    }
}

class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}