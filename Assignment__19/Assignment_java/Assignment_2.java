
import java.util.*;

class Difference
{
    public int Frequency(int []Arr , int iLength)
    {
        int iCountEven = 0 , iCountOdd = 0, iFreq = 0;

        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0 )
            {
                iCountEven = iCountEven + 1 ;
            }
            else 
            {
                iCountOdd = iCountOdd + 1 ;
            }
        }
        System.out.println();
        System.out.println("("+iCountEven+" - "+iCountOdd+")");
        iFreq = iCountEven - iCountOdd;
        return iFreq;
    }
}
class Assignment_2
{

    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        int iSize = sobj.nextInt();
    

        int []ptr = new int[iSize];

        System.out.println("Enter "+iSize+" Elements : ");

        for(int iCnt = 0 ; iCnt < iSize; iCnt++)
        {
            System.out.print("Enter elements "+ (iCnt + 1) +" : ");
            ptr[iCnt] = sobj.nextInt();
        }
        Difference dobj = new Difference();
        int iRet = dobj.Frequency(ptr , iSize);
        System.out.println("Result is : "+iRet);
    }
}