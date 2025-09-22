import java.util.*;

class Pattern2
{

    private int num;

    public void setNum(int num)
    {
        this.num = num;
    }

    public int getNum()
    {
        return this.num;
    }

    public void printAnswer()
    {
        int n = getNum();

        for (int i = 1; i <= n; i++)  
        {
           
            for (int j = i; j < n; j++)
            {
                System.out.print("  ");
            }

            
            for (int j = 1; j <= i; j++)
            {
                System.out.print((char)(64 + j));
                if (j < i) System.out.print(" ");  
            }

          
            for (int j = i - 1; j >= 1; j--)
            {
                System.out.print(" " + (char)(64 + j));
            }

            System.out.println(); 
        }
    }
    public void inputNum()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number : ");
        int num = sc.nextInt();
        setNum(num);
    }
}
class Assignment_1
{
    public static void main(String A[])
    { 
        Pattern2 ob = new Pattern2();
        ob.inputNum();
        ob.printAnswer();

        
    }
}
