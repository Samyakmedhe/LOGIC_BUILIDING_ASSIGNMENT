import java.util.*;

class ProductArray
{
    public void productArray(int arr[], int n)
    {
        if (n == 1) {
            System.out.println("0");
            return;
        }

        int prod[] = new int[n];
        int temp = 1;

        
        prod[0] = 1;
        for (int i = 1; i < n; i++) 
        {
            prod[i] = prod[i - 1] * arr[i - 1];
        }

        
        temp = 1;
        for (int i = n - 1; i >= 0; i--) 
        {
            prod[i] = prod[i] * temp;
            temp = temp * arr[i];
        }

      
        System.out.println("The product array is:");
        for (int i = 0; i < n; i++) 
        {
            System.out.print(prod[i] + " ");
        }
        System.out.println();
    }
}

class Assignment_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array: ");
        int n = sobj.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter elements: ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sobj.nextInt();
        }

        ProductArray obj = new ProductArray();
        obj.productArray(arr, n);
    }
}
