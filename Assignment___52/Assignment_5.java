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

    public void SumArray()
    {
        int iSum = 0;
        for(int i = 0 ; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }

        System.out.println("Summation of first Array is : "+iSum);
    }


}
class Assignment_5
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

        Mobj1.SumArray();
        Mobj2.SumArray();


    }
}
