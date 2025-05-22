import java.util.*;

class Pattern 
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       
        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt+" # ");
        }
        System.out.println();
    }
}
class Assignment_2
{


    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);
    }
}