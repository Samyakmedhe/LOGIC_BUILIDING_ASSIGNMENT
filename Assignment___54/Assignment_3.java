import java.util.*;



class MyArray
{
    private String Arr[];

    public MyArray(int iSize)
    {
        Arr = new String[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter "+ Arr.length+" Elements : ");

        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextLine();
        }
    }

    public void Display()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

    public int CountCapital()
    {
        int iCount = 0 ;

        for(int i = 0 ; i < Arr.length; i++)
        {
            String str = Arr[i];
            for(int j = 0 ; j < str.length(); j++)
            {   
                char ch = str.charAt(j);

                if(ch >= 'A' &&  ch <= 'Z')
                {
                    iCount++;
                }
            }
        }
        
        return iCount;

    }

}
class Assignment_3
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);
        int iRet = 0 ;

        System.out.println("Enter Size of first Array : ");
        int iValue1 = sobj.nextInt();

        MyArray Mobj1 = new MyArray(iValue1);
        Mobj1.Accept();

        System.out.println("Elements of Array are : ");

        Mobj1.Display();
        
        iRet = Mobj1.CountCapital();
        System.out.println("Total capital characters in array : " + iRet);
        

    }
}
