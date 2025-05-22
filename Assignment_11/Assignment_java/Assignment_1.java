import java.util.*;

class Pattern 
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'A';
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++,ch++)
        {
            System.out.print(ch+"\t");
        }
        System.out.println();
    }
}
class Assignment_1
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