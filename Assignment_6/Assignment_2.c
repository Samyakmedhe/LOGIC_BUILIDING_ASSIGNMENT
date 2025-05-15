#include<stdio.h>


void Number(int iNo)
{ 
   if(iNo == 1)
    {
        printf("One\n");
    }
   else if (iNo == 2 || iNo == -2)
   {
        printf("Two\n");
   }
   else if (iNo == 3 || iNo == - 3)
   {
        printf("Three\n");
   }
   else if (iNo == 4 || iNo == -4)
   {
        printf("Four\n");
   }
   else if (iNo == 5 || iNo == -5)
   {
        printf("Five\n");
   }
   else if (iNo == 6 || iNo == -6)
   {
        printf("Six\n");
   }
   else if (iNo == 7 || iNo == -7)
   {
        printf("Seven\n");
   }
   else if (iNo == 8 || iNo == -8)
   {
        printf("Eight\n");
   }
   else if (iNo == 9 || iNo == -9)
   {
        printf("Nine\n");
   }
   else if (iNo == 10 || iNo == -10)
   {
        printf("Ten\n");
   }
   else
   {
        printf("INVAILD INPUT ❌: Only Single Digit Numbers \n");
   }

}

int main()
{
    int iValue = 0;
    printf("Enter number one digit number to print it into word  : ");
    scanf("%d",&iValue);
    
    Number(iValue);

    return 0;
}