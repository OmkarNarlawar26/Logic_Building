import java.util.*;

class program860
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

        int iMax = 0;
        String MaxWord = null;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                MaxWord = Arr[i];
            }
        }

        System.out.println("Longest word length is : " + iMax);
        System.out.println("Longest word is        : " + MaxWord);

        sobj.close();
    }
}