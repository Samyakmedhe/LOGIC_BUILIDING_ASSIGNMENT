#include<stdio.h>

int KMtoMeter(int iNo )
{

    int iCnt = 0;
    int iKelometers = 1000;
    int iAnswer = 0;
    iAnswer = iNo * iKelometers;
    return iAnswer;


}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number to Covert KM into Meters : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("OUTPUT : %dKm Converted into  Meters is  :  %d \n",iValue,iRet);

    return 0 ;
}