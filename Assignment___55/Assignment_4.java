import java.util.*;



class MyArray
{
    private char Arr[];

    public MyArray(int iSize)
    {
        Arr = new char[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter "+ Arr.length+" Elements : ");

        for(int i = 0 ; i < Arr.length; i++)
        {
            Arr[i] = sobj.next().charAt(0);
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

    public int Difference()
    {
        int iCount1 = 0 , iCount2 = 0 ;
        for(int i = 0; i < Arr.length; i++ )
        {
            if(Arr[i] >= 'A' && Arr[i]<= 'Z')
            {
                iCount1++;
            }
            else
            {
                iCount2++;
            }
        }

        return (iCount1 - iCount2);
    }
}
class Assignment_4
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

        iRet = Mobj1.Difference();
        System.out.println("Differece of Capital and Small is : "+iRet);
    

    }
}
