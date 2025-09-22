import java.util.*;

class StringX 
{
    public static boolean isBalanced(String str)
    {
        int iCount = 0;

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);
            if(ch == '(')
            {
                iCount++;
            }
            else if(ch == ')')
            {
                iCount--;
                if(iCount < 0)
                {
                    return false;
                }
            }

        }
        return(iCount == 0 );
    }
    
    
}

class Assignment_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter  string: ");
        String str = sobj.nextLine();

       

        if(StringX.isBalanced(str))
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

    
       
    }
}
