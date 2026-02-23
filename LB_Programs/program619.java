import java.util.*;

class program618
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iCount1 = 0;
        int iCount2 = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        int iDigit;

        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo = iNo / 2;
            System.out.print(iDigit);

            if(iDigit == 1)
            {
                iCount1++;
            }
            else
            {
                iCount2++;
            }
        }
                System.out.println();
                System.out.println(iCount1);
                System.out.println(iCount2);

        
    }
}