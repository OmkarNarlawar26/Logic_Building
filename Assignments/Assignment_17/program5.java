// Write a program to check whether a number is a number is palindrome or not.

class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;


        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(num * iCnt);
        }
    }
}

class program5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }

}