
import java.util.*;


class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        char ch1 = 'A';
        char ch2 = 'a';   
        for(int i = 1; i <=iRow ; i++)
        {               
            for(int j = 1 ; j <=iCol; j++)
            {
                if(i % 2 == 0 )
                {
                    System.out.print(ch2+"\t");
                    ch2++;
                }
                else
                {
                    System.out.print(ch1+"\t");
                    ch1++;
                } 
            }
            System.out.println();

        }
    }
}
class Assignment_2
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