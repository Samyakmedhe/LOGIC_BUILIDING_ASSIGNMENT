import java.util.Scanner;

class PrintPattern 
{
    int rows;

    public void Pattern(int iRow)   
    {   
        for(int i = iRow ; i>= 1  ;i-- )
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

class Assignment_5
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
