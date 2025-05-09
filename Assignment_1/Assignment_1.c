

#include<stdio.h>

#define WRONG_INPUT -1 

int DivideTwo(int iValue1 , int iValue2 )
{
    int iAnswer = 0;
    if(iValue2 <= 0)
    {
        return WRONG_INPUT;
    }
    iAnswer = iValue1 / iValue2;
    return iAnswer;

}
int main()
{
    int iNo1 = 0 , iNo2 = 0;
    int iresult = 0 ;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);


    printf("Enter Second Number : ");
    scanf("%d",&iNo2);
   
    
    iresult = DivideTwo(iNo1, iNo2);
    if (iresult == -1)
    {
        printf("Wrong Input ❌\n");
    }
    else
    {
        printf("Division is : %d\n",iresult);
    }
    

    return 0 ;
}