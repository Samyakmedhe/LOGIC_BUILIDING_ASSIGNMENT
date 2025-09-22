import java.util.*;

class EquilibriumIndex
{
    public void equilibriumIndex(int arr[], int iNo)
    {
        int iTotalSum = 0;
        for(int i = 0; i < iNo ; i++)
        {
            arr[i] += iTotalSum ;
        }

        int ileftSum = 0 ;

        boolean iFound = false ;

        for(int i = 0 ; i < iNo ; i++)
        {
            iTotalSum -= arr[i];
            if(ileftSum == iTotalSum)
            {
                System.out.println("Equilibrium Index found at: " + i);
                iFound = true;
            }
            ileftSum += arr[i];

        }
        if(iFound == false)
        {
            System.out.println("No Equilibrium Index found  : -1");
        }


    }
}

class Assignment_4
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

        EquilibriumIndex obj = new EquilibriumIndex();
        obj.equilibriumIndex(arr, n);
    }
}
