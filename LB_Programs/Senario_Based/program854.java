import java.util.*;

class program854
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

        for(String s : Arr)         // this loop is called as (for each) loop
        {
            System.out.println(s);
        }

        sobj.close();
    }
}