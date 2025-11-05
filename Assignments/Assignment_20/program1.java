// Write program to find sum of all even numbers up to N.

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println(iSum);
    }
}

class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}