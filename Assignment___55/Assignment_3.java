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

    public int Search(char ch)
    {
        int iCount = 0 ;
        for(int i = 0; i < Arr.length; i++ )
        {
            if(Arr[i] == ch || Arr[i] == ch + 32 || Arr[i] == ch-32)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class Assignment_3
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);
        int iRet = 0 ;

        System.out.println("Enter Size of first Array : ");
        int iValue1 = sobj.nextInt();

        MyArray Mobj1 = new MyArray(iValue1);
        Mobj1.Accept();

        System.out.println("Enter Character that you want to find  : ");
        char ch1 = sobj.next().charAt(0);


        System.out.println("Elements of Array are : ");

        Mobj1.Display();


        iRet = Mobj1.Search(ch1);
        System.out.println("Character '" + ch1 + "' occurs " + iRet + " times in the array.");
    

    }
}
