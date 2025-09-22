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

    
    public static MyArray CopyArrayRev(MyArray Mobj) 
    {
        MyArray rev = new MyArray(Mobj.Arr.length);
        int j = 0;

        for (int i = Mobj.Arr.length - 1; i >= 0; i--) 
        {
            rev.Arr[j] = Mobj.Arr[i];
            j++;
        }

        return rev;
    }
}

class Assignment_3
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter Size of first Array : ");
        int iValue1 = sobj.nextInt();
        MyArray Mobj1 = new MyArray(iValue1);
        Mobj1.Accept();

        System.out.println("Enter Size of Second Array : ");
        int iValue2 = sobj.nextInt();
        MyArray Mobj2 = new MyArray(iValue2);
        Mobj2.Accept();

        MyArray rev1 = MyArray.CopyArrayRev(Mobj1);
        MyArray rev2 = MyArray.CopyArrayRev(Mobj2);

        System.out.println("First Array in Reverse: ");
        rev1.Display();

        System.out.println("Second Array in Reverse: ");
        rev2.Display();

    }
}