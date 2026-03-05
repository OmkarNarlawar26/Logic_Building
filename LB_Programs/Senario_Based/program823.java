import java.util.*;

class program823
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        int iCount = 0, iDigit = 0, iTemp = 0, iSum = 0, iPow = 0, iCountTemp = 0;

        iTemp = iNo;

        // COunt number of digits
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        iNo = iTemp;
        iCountTemp = iCount;

        // y = iCount
        // x = iDigit
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iPow = 1;

                // Count Power
                while(iCount != 0)
                {
                    iPow = iPow * iDigit;
                    iCount--;
                }

            iCount = iCountTemp;

            iSum = iSum + iPow;

            iNo = iNo /10;
        }

        if(iTemp == iSum)
        {
            System.out.println(iTemp + " is a Armstrong Number");
        }
        else
        {
            System.out.println(iTemp + " is not a Armstrong Number");
        }
        
        sobj.close();
    }
}
