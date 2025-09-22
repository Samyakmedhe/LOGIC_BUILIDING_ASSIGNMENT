import java.util.Scanner;

class Matrix 
{
    int rows, cols;
    int[][] mat;

    void readMatrix(Scanner sc) 
    {
        System.out.print("Enter number of rows: ");
        rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        cols = sc.nextInt();

        mat = new int[rows][cols];

        System.out.println("Enter elements of matrix:");
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                mat[i][j] = sc.nextInt();
            }
        }
    }

    
    void printMatrix() 
    {
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                System.out.print(mat[i][j] + "\t");
            }
            System.out.println();
        }
    }

    Matrix MultiMatrix(Matrix m2) 
    {
        if (this.rows != m2.rows || this.cols != m2.cols) 
        {
            System.out.println("Matrix addition not possible");
            return null;
        }

        Matrix iMulti = new Matrix();
        iMulti.rows = rows;
        iMulti.cols = cols;
        iMulti.mat = new int[rows][cols];

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                iMulti.mat[i][j] = this.mat[i][j] * m2.mat[i][j];
            }
        }
        return iMulti;
    }
}

class Assignment_2
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Matrix 1:");
        Matrix m1 = new Matrix();
        m1.readMatrix(sc);

        System.out.println("Matrix 2:");
        Matrix m2 = new Matrix();
        m2.readMatrix(sc);

        System.out.println("\nMatrix 1:");
        m1.printMatrix();

        System.out.println("\nMatrix 2:");
        m2.printMatrix();

        Matrix product = m1.MultiMatrix(m2);
        if (product != null) 
        {
            System.out.println("\nMultiplication of Matrices (element-wise):");
            product.printMatrix();
        }
    }
}
