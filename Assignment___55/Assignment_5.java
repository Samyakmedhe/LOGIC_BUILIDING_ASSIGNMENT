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

   
    public void Pattern()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j = 0 ; j < Arr[i];j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

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

        System.out.println("Elements of First Array are : ");
        Mobj1.Display();

        System.out.println("Output : ");
        Mobj1.Pattern();  

    
       
    }
}
