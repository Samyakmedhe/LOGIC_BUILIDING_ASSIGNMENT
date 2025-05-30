

import java.util.*;

class Difference
{
    public int SumEvenOdd(int [] Arr , int iLength)
    {
        int iSumEven = 0 , iSumOdd = 0, iDiff = 0 ;
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] % 2  == 0 )
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else 
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }
        iDiff = iSumEven - iSumOdd;
        System.out.println("("+iSumEven+" - "+iSumOdd+")");
        return iDiff;
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
        Difference dobj = new Difference();
        int iRet = dobj.SumEvenOdd(ptr ,iSize);
        System.out.println("Result is : "+iRet);
    }
}