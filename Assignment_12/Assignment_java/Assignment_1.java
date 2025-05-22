
import java.util.*;

class Pattern
{
    public void Display(int iRows , int iCol)
    {
        int i = 0 , j = 0 ;

        for(i = 1 ; i <= iRows ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
class Assignment_1
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of Coloumns :");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1 , iValue2);

    }
}