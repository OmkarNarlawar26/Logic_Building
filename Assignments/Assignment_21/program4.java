// Write a program to count total numbwer of factors of a given number

class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int FCount = 0;

        for(iCnt = 1; iCnt <= num/2; iCnt++)
        {
           if(num % iCnt == 0)
           {
                FCount++;
           }
        }
        System.out.println(FCount);

    }
}

class program4
{
    public static void main(String agrs[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}