#include<stdio.h>

double SquareMeter(float iValue )
{
    float fSqaureFeet = 0.0929;
    float fAnswer = 0.0;
    fAnswer = iValue * fSqaureFeet;
    return fAnswer;
    

}
int main()
{
    int iValue = 0;

    double dRet = 0.0;

    printf("Enter Area of Square feet : ");
    scanf("%d",&iValue);

    dRet =  SquareMeter(iValue);
    printf("OUTPUT : %f \n",dRet);

    return 0 ;
}