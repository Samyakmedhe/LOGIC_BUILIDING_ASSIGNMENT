import java.util.*;

class ReverseStringManual 
{   
    public String reverseString(String str) 
    {
        char[] chars = str.toCharArray();
        int start = 0, end = chars.length - 1;

       
        while (start < end) 
        {
            char temp = chars[start];
            chars[start] = chars[end];
            chars[end] = temp;
            start++;
            end--;
        }

        return new String(chars);
    }
}

class Assignment_3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string to reverse:");
        String input = sobj.nextLine();

        ReverseStringManual obj = new ReverseStringManual();
        String reversed = obj.reverseString(input);

        System.out.println("Reversed string: " + reversed);

 
    }
}
