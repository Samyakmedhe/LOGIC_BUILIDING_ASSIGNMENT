
import java.util.*;

class Contains11
{
    public boolean Check(int []Arr , int iLength)
    {
        boolean bFlag = false;
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] == 11 ) 
            {
                bFlag = true;
                break;
            }
        }
        System.out.println();

        return bFlag;
    }
}
class Assignment_3
{

    public static void main(String A [])
    {
        boolean bRet = false;

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
        Contains11 cobj = new Contains11();
        bRet = cobj.Check(ptr , iSize);
        if(bRet == true)
        {
            System.out.println("11 is PRESENT...");
        }
        else 
        {
            System.out.println("11 is ABSENT...");   
        }

    }
}