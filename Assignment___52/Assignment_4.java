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
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter "+ Arr.length+" Elements : ");

        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
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

    public MyArray concate(MyArray Mobj2)
    {
        MyArray result = new MyArray(this.Arr.length +Mobj2.Arr.length);

        int S =0 ;
        for(int i = 0 ; i < this.Arr.length; i++)
        {
            result.Arr[S++] = this.Arr[i];
        }

        for(int i = 0 ; i < this.Arr.length; i++)
        {
            result.Arr[S++] = Mobj2.Arr[i];
        }
        return result; 
    }


}
class Assignment_4
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

        System.out.println("Elements of Array are : ");

        Mobj1.Display();
        Mobj2.Display();


        MyArray concate = Mobj1.concate(Mobj2);

        System.out.println("Combination of two Array are  : ");

        concate.Display();

    }
}
