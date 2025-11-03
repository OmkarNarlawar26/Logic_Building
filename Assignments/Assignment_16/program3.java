// Write a program to find the factorial of a number using a for loop

class Logic
{
    void findFactorial(int num)
    {
        int iCnt = 0;
        int iFact = 1;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println("Factorial of a given number is : "+iFact);
    }
}

class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}