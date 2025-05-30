
import java.util.*;

class CountEven
{
    public int Frequency(int [] Arr , int iLength)
    {
        int iCount = 0;
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] % 2  == 0 )
            {
                iCount = iCount + 1 ;
            }
           
        }
        return iCount;
    }
}
class Assignment_1 
{

    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter number  : ");
        int iSize = sobj.nextInt();
        int []ptr = new int[iSize];

        System.out.println("Enter Elements  : "+iSize);

        for(int iCnt = 0 ; iCnt < iSize; iCnt++)
        {
            System.out.print("Enter Elements : "+(iCnt + 1)+" : ");
            ptr[iCnt] = sobj.nextInt();

        }
        CountEven dobj = new CountEven();
        int iRet = dobj.Frequency(ptr ,iSize);
        System.out.println("Result is : "+iRet);
    }
}