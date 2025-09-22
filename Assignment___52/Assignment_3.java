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

    public void DisplayOdd()
    {
        for(int i = 0 ; i < Arr.length; i++)
        {
            if(Arr[i] % 2 != 0 )
            {
                System.out.print(Arr[i]+"\t");
            }
            
        }
        System.out.println();
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

        System.out.println("Odd elements are : ");

        Mobj1.DisplayOdd();
        Mobj2.DisplayOdd();

    }
}