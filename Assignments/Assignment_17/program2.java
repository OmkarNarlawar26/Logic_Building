// Write a program to check whether a number is a number is palindrome or not.

class Logic
{
    void checkPalindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }

        if(iTemp == iRev)
        {
        System.out.print(iTemp + " is a Palindrome number");
        }
        else
        {
            System.out.print(iTemp + " is not a Palindrome number");
        }
    }
}

class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }

}