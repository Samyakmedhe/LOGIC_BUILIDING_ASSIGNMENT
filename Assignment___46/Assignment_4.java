
import java.util.*;


class Pattern
{
    public void Pattern(int iRow , int iCol)
    {       
        int iCnt = iRow;
        for(int i = 1; i <=iRow ; i++)
        {   
            for(int j = 1 ; j <=iCol; j++)
            {
                System.out.print(iCnt+"\t");
                
            }
            iCnt--;
            System.out.println();

        }
    }
}
class Assignment_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1 , iValue2);

    }
}