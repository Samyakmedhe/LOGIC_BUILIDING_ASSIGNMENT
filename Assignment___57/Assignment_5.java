import java.util.*;

class PythagoreanTriplet
{
    public boolean containsTriplet(int arr[], int iNo)
    {
        
        for(int i = 0 ; i < iNo ; i++)
        {
            arr[i] = arr[i] * arr[i];
        }

        Arrays.sort(arr);

        for(int C = iNo  - 1 ; C >= 2 ; C-- )
        {
            int A = 0 , B = C -1;

            while(A < B )
            {
                if(arr[A] + arr[B] == arr[C])
                {
                    return true;
                }
                else if(arr[A] + arr[B] < arr[C])
                {
                    A++;
                }
                else
                {
                    B--;
                }
            }
        }

        return false;
    }

}

class Assignment_5
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

        PythagoreanTriplet obj = new PythagoreanTriplet();

        if (obj.containsTriplet(arr, n ))
        {
            System.out.println("Yes, array contains a Pythagorean triplet");
        }
        else
        {
            System.out.println("No Pythagorean triplet found");
        }
    }
}
