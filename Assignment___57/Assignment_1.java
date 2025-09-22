import java.util.*;

class MaximumDifference
{
    public int maxDiff(int arr[], int arr_size)
    {
        int minElement = arr[0];
        int maxDiff = arr[1] - arr[0];

        for (int i = 1; i < arr_size; i++)
        {
            if (arr[i] - minElement > maxDiff)
            {
                maxDiff = arr[i] - minElement;
            }

            if (arr[i] < minElement)
            {
                minElement = arr[i];
            }
        }

        return maxDiff;
    }
}

class Assignment_1
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

        MaximumDifference obj = new MaximumDifference();
        int ans = obj.maxDiff(arr, n);

        System.out.println("Maximum difference is : " + ans);
    }
}
