// Write a program to count how many even and odd numbers are present between 1 to N.

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int ECount = 0;
        int OCount = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                ECount++;
            }
            else
            {
                OCount++;
            }
        }
        System.out.println(ECount);
        System.out.println(OCount);
    }
}

class program2
{
    public static void main(String agrs[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}