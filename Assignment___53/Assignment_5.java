import java.util.*;

class MyArray
{
    private int Arr[];

    public MyArray(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter " + Arr.length + " Elements : ");

        for (int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        for (int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();
    }

   
    public boolean ChkPalindrome()
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;

        while (iStart < iEnd)
        {
            if (Arr[iStart] != Arr[iEnd])
            {
                return false;
            }
            iStart++;
            iEnd--;
        }
        return true;
    }
    
}

class Assignment_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size of First Array : ");
        int iValue1 = sobj.nextInt();

        MyArray Mobj1 = new MyArray(iValue1);
        Mobj1.Accept();

        System.out.println("Enter Size of Second Array : ");
        int iValue2 = sobj.nextInt();

        MyArray Mobj2 = new MyArray(iValue2);
        Mobj2.Accept();

        System.out.println("Elements of First Array are : ");
        Mobj1.Display();

        System.out.println("Elements of Second Array are : ");
        Mobj2.Display();

       
        if (Mobj1.ChkPalindrome())
        {
            System.out.println("True");
        }      
        else
        {
            System.out.println("False");
        }
            

        if (Mobj2.ChkPalindrome())
        {
            System.out.println("True");
        }      
        else
        {
            System.out.println("False");
        }
    }
}
