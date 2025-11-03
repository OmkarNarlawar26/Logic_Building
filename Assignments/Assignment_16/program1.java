// Write a program to calculate the sum of first N natural numbers.

class Logic
{
    void calculateSum(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Sum of N natural number is : "+iSum);
    }
}

class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}