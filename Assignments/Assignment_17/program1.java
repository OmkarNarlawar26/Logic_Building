// Write a program to find the sum of digits of a number.

class Logic
{
    void SumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iSum = iSum + iDigit;
        }
        System.out.print(iSum);
    }
}

class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}