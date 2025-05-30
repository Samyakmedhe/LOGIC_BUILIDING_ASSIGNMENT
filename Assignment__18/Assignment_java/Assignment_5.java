
import java.util.*;

class Divible
{
    public void Display(int []Arr , int iLength)
    {
        for(int iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] % 11 == 0 )
            {
                System.out.print(Arr[iCnt]+ " ");
            }
        }
        System.out.println();

    }
}
class Assignment_5
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
        Divible dobj = new Divible();
        dobj.Display(ptr , iSize);

    }
}