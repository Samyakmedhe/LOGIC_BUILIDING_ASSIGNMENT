import java.util.*;

class Pattern 
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print(iCnt+" * ");
        }
        System.out.println();
    }
}
class Assignment_3
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