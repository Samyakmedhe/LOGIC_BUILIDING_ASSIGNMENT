import java.util.*;


class Matrix
{
    private int Arr[][];

    public Matrix(int A , int B )
    {
        Arr = new int [A][B];
    }   


    public void Accept()
    {
        System.out.println("Enter Number of Elements : ");
        Scanner sobj = new Scanner(System.in);
        int i , j = 0;
        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

    }

    public void Display()
    {
        System.out.println("Number of Elements are : ");
        Scanner sobj = new Scanner(System.in);
        int i , j = 0;
        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int[][] SwapCol()
    {
        int i = 0 , j = 0;
        int temp = Arr[i][j];
        
        for(i = 0 ; i < Arr.length; i++)
        {
            temp = Arr[i][0];
            Arr[i][0] = Arr[i][Arr[0].length-1];
            Arr[i][Arr[0].length-1] = temp;
        }
        return Arr;
        
    }
}
class Assignment_2
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of iColumns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Swaping 2D Columns are : ");
        int [][] iRet = mobj.SwapCol();

        for(int i = 0 ; i < iRet.length ; i++)
        {
            for(int j = 0 ; j < iRet[i].length; j++)
            {
                System.out.print(iRet[i][j]+"\t");
            }
            System.out.println();
        }

    }
}