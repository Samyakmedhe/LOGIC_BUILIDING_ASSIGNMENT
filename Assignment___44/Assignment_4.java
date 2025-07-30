
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

    public void AddColunms()
    {
        int i = 0 , j = 0 ;
        for(j = 0 ; j < Arr[0].length; j++)
        {
            int iSum = 0;
            for(i = 0; i < Arr.length; i++)
            {
                
               iSum = iSum + Arr[i][j];
         
               
            }
            System.out.println("Addition of Colunms is : " +iSum);
            
        }
    }
}
class Assignment_4
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

        mobj.AddColunms();
       


    }
}