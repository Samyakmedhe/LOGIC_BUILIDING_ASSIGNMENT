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

    public int SummationDigit(int iNo)
    {
        int iDigit = 0, iSum = 0 ;

        while(iNo != 0 )
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;

    }

    public void SumArray()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = SummationDigit(Arr[i]);
        }
    }
}
class Assignment_2
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

        Mobj1.SumArray();

        System.out.println("Array after Summation each Digits is  : ");
        Mobj1.Display();

    }
}
