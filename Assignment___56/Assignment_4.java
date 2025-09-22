import java.util.*;

class MyArray 
{
    private String str;

    public void Accept() 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a String : ");
        str = sobj.nextLine();

        System.out.println("Enter a character to remove : ");
        char ch = sobj.next().charAt(0);

        RemoveCharacter(ch);
    }

    public void RemoveCharacter(char ch) 
    {
        String result = "";

        for (int i = 0; i < str.length(); i++) 
        {
            if (str.charAt(i) != ch)   
            {
                result += str.charAt(i);
            }
        }

        System.out.println("String after removing '" + ch + "' : " + result);
    }
}

class Assignment_4
{
    public static void main(String A[]) 
    {
        MyArray Mobj = new MyArray();
        Mobj.Accept();
    }
}
