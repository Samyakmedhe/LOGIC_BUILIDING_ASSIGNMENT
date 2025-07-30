
import java.util.*;


class Matrix
{
    private int  Arr [] [];

    public Matrix(int A , int B )
    {
        Arr = new int [A][B];
    }
    public void Accept()
    {
        System.out.println("Enter Elements : ");
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of Matrix are : ");
        int i = 0 , j = 0;

        for(i =0  ; i < Arr.length; i++)
        {
            for(j =0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int  AddDiagonal(int iNo)
    {
        int i = 0 , j = 0, iCount= 0;
        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(iNo == Arr[i][j])
                {
                    iCount++;
                }
            }
        }
        return iCount ;
    }
}
class Assignment_2
{
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Coloumns : ");
        int iCol = sobj.nextInt();

        System.out.println("Enter Number that you want to se how many times it in Matix : ");
        int iValue = sobj.nextInt();


        Matrix mobj = new Matrix(iRow , iCol);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.AddDiagonal(iValue);
        System.out.println("Frequnecy of "+iValue+" is : " + iRet);


    }
}