import java.util.*;

public class Assignment_5 {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Input number of rows: ");
        int row = sc.nextInt();
        System.out.print("Input number of cols: ");
        int col = sc.nextInt();


        int a[][] = new int[row][col];

       
        System.out.println("Enter elements of matrix a:");
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < col; j++) 
            {
                a[i][j] = sc.nextInt();
            }
        }

       
        System.out.println("\nMatrix a:");
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < col; j++) 
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }

        
        System.out.println("\nTranspose Matrix is:");
        for (int i = 0; i < col; i++) 
        {
            for (int j = 0; j < row; j++) 
            {
                System.out.print(a[j][i] + "\t");
            }
            System.out.println();
        }

    }
}
