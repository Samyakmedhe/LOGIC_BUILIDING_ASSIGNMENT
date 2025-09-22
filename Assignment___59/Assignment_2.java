import java.util.Scanner;

class PrintPattern 
{
    int rows;

    public void Pattern(int iRow)   
    {   
        for(int i = 1 ; i <= iRow ; i++)
        {
            for(int j = 1 ; j <= (2 * iRow - 1); j++)
            {
                if(j >= (iRow - i + 1 ) && j <= (iRow + i - 1))
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

class Assignment_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows : ");
        int iRow = sobj.nextInt();


        PrintPattern mobj = new PrintPattern();

        mobj.Pattern(iRow);

    }
}
