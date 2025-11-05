// Write program to check whether a number is a perfect number or not.

class Logic
{
    void checkPerfect(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= n/2; iCnt++)
        {
            if((n % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(n == iSum)
        {
            System.out.println("is perfect");
        }
        else
        {
            System.out.println("is not perfect");
        }
    }
}

class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}