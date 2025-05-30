
import java.util.*;

class CountiNo
{
    public int Frequency(int [] Arr , int iLength, int iValue)
    {
        int iCount = 0;
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] == iValue )
            {
                iCount = iCount + 1 ;
            }
           
        }
        return iCount;
    }
}
class Assignment_5
{

    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter number  : ");
        int iSize = sobj.nextInt();
        System.out.println("Enter number  : ");
        int iNo = sobj.nextInt();
        int []ptr = new int[iSize];

        System.out.println("Enter Elements  : "+iSize);

        for(int iCnt = 0 ; iCnt < iSize; iCnt++)
        {
            System.out.print("Enter Elements : "+(iCnt + 1)+" : ");
            ptr[iCnt] = sobj.nextInt();

        }
        CountiNo cobj = new CountiNo();
        int iRet = cobj.Frequency(ptr ,iSize,iNo);
        System.out.println("Result is : "+iRet);
    }
}