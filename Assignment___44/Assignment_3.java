
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

    public int MaxDiagonal()
    {
        int i = 0 , j = 0, iMax = Arr[0][0];
        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j || i + j == Arr.length - 1)
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
        return iMax;
    }
}
class Assignment_3
{
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Coloumns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.MaxDiagonal();
        System.out.println("Maximum number of Matrix Diagonal is : " + iRet);


    }
}