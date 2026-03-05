import java.util.*;

class program858
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        // Step 0
        String str = sobj.nextLine();

        // Step 1
        str = str.trim();

        // Step 2
        str = str.replaceAll("\\s+", " ");

        // Step 3
        String Arr[] = str.split(" ");

        int i = 0;
        int Max = 0;

        for(i = 0; i < Arr.length; i++)
        {

            if(Max < Arr[i].length())
            {
                Max = Arr[i].length();
            }
        }

        System.out.println( Max);

        sobj.close();
    }
}