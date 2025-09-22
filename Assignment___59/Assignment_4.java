import java.util.Scanner;

class PrintPattern 
{
    int rows;

    public void Pattern(int iRow)   
    {   
        for(int i = 1 ; i<= iRow ;i++ )
        {
            for(int j = 1 ; j <= i ; j++)
            {
                System.out.print("*");
            }

            int spaces = iRow - i; 
            for (int j = 1; j <= spaces; j++) 
            {
                System.out.print(" ");
            }

            for (int j = 1; j <= (2 * i - 1); j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        }    

    }
    
}

class Assignment_4
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
