// Write a program to print numbers from 1 to N that are divisible by both 2 and 3.

class Logic
{
    void printDivisibleBy2and3(int num)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
           if((iCnt % 2 == 0) && (iCnt % 3 == 0))
           {
                System.out.println(iCnt);
           }
        }

    }
}

class program5
{
    public static void main(String agrs[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}