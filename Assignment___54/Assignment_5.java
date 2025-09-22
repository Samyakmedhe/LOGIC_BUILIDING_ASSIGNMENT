import java.util.*;

class MyArray
{
    private float Arr[];

    public MyArray(int iSize)
    {
        Arr = new float[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter " + Arr.length + " Elements : ");

        for (int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextFloat();
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

   
    public void Percentage()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            if(Arr[i] < 35)
            {
                System.out.println(Arr[i]+" : Fail");
            }
            else if(Arr[i] < 50)
            {
                System.out.println(Arr[i]+" : Pass Class");
            }
            else if(Arr[i] < 60)
            {
                System.out.println(Arr[i]+" : Second Class");
            }
            else if(Arr[i] < 70)
            {
                System.out.println(Arr[i]+" : First Class");
            }
            else
            {
                System.out.println(Arr[i]+" : First Class with Distinction");
            }
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

        System.out.println("Result : ");
        Mobj1.Percentage();  

    
       
    }
}
