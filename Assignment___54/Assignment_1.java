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

    public int ReverseNumber(int iNo)
    {
        int iDigit = 0, Rev = 0  ;

        while(iNo != 0 )
        {
            iDigit = iNo % 10;
            Rev = Rev * 10 + iDigit;
            iNo = iNo / 10;
        }
        return Rev;

    }

    public void ReverseArray()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = ReverseNumber(Arr[i]);
        }
    }
}
class Assignment_1
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

        Mobj1.ReverseArray();

        System.out.println("Array after reversing each number : ");
        Mobj1.Display();

    }
}
