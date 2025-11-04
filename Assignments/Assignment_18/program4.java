// write a program to find the sum of even and odd digits separately in a number.

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0;
        int iESum = 0;
        int iOSum = 0;

        while (num != 0)
        {
            iDigit = num % 10;
            num = num / 10;

            if(iDigit % 2 == 0)
            {
                iESum = iESum + iDigit;
            }
            else
            {
                iOSum = iOSum + iDigit;
            }
        }
            System.out.println("Sum of even digits is : "+iESum);
            System.out.println("Sum of odd digits is : "+iOSum);
    }
}

class program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}