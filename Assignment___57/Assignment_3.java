import java.util.*;

class SegregateEvenOdd
{
    public void segregateEvenOdd(int arr[], int iNo)
    {
        int Even = 0, Odd = arr.length - 1;
         
        while(Even < Odd)
        {
            if(arr[Even] % 2 == 0 )
            {
                Even++;
            }
            else if(arr[Odd] % 2 == 1)
            {
                Odd--;
            }
            else
            {
                int temp = arr[Even];
                arr[Even] = arr[Odd];
                arr[Odd] = temp;
                Even++;
                Odd--;
            }
        }
    }
}

class Assignment_3
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

        SegregateEvenOdd obj = new SegregateEvenOdd();
        obj.segregateEvenOdd(arr, n);

       
        System.out.println("Array after segregation: " + Arrays.toString(arr));
    }
}
