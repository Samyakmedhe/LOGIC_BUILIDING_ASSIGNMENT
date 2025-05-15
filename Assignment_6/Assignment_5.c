#include<stdio.h>

void Tables(int iNo )
{

    int iCnt = 0;
    int iMulti = 1;
    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in  Tables, But i am considering it is positive value \n");
        iNo = -iNo;
    }
    for(iCnt = 10  ; iCnt>= 1; iCnt--)
    {
        printf("%d ⤬ %d = %d\n",iNo,iCnt,iNo * iCnt);
    }

    

}
int main()
{
    int iValue = 0;

    printf("Enter number for there Table in Reverse : ");
    scanf("%d",&iValue);

    Tables(iValue);


    return 0 ;
}