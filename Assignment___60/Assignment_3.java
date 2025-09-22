import java.util.Scanner;

class FibonacciSeries
{
    int iNo; 

    void readTerms(Scanner sc) 
    {
        System.out.print("Enter number of terms: ");
        iNo= sc.nextInt();
    }

    void printSeries() 
    {
        int first = 0, second = 1;

        System.out.print("Fibonacci Series: ");
        for (int i = 1; i <= iNo; i++) 
        {
            System.out.print(first + " ");
            int next = first + second;
            first = second;
            second = next;
        }
        System.out.println();
    }
}

public class Assignment_3 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        FibonacciSeries fib = new FibonacciSeries();
        fib.readTerms(sc);
        fib.printSeries();

        sc.close();
    }
}
