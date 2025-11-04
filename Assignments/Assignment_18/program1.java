// write a program to check whether a number is prime or not

class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;
        int iFreq = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                iFreq++;
            }
        }
            if(iFreq == 2)
            {
                System.out.println("Prime");
            }
            else
            {
                System.out.println("Not prime");
            }
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}