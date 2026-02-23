import java.util.*;

class program618
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iCount = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo = iNo / 2;
            iCount = iCount + iDigit;
            System.out.print(iDigit);

        }
        
        System.out.println();
        System.out.println("Number of 1's are : "+iCount);
        
    }
}