import java.util.*;

class StringRotation 
{
    public  boolean Rotation(String str1 , String str2)
    {
        int iNo = str1.length();

        if(iNo != str2.length())
        {
            return false;
        }

        for(int i = 0 ; i < iNo ; i++)
        {
            boolean Match = true;
            for(int j =0 ; j < iNo ; j++)
            {
                if(str1.charAt(j) != str2.charAt((i+j) % iNo))
                {
                    Match = false;
                    break;
                }
            }

            if(Match)
            {
                return true;
            }
        }
        return false;
    }
    
}

class Assignment_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string: ");
        String str2 = sobj.nextLine();

        StringRotation Sobj = new StringRotation();

        if(Sobj.Rotation(str1, str2))
        {
            System.out.println("Output : TRUE");
        }
        else
        {
            System.out.println("Output : FALSE");
        }

    
       
    }
}
