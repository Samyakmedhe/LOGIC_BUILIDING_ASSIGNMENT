#include<stdio.h>

double FhtoCs(float ftemp )
{
    float celsius = 0.0;
    celsius = ((ftemp - 32 )*(5.0/9.0));
    return celsius;
    

}
int main()
{
    float fValue = 0.0f;

    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("OUTPUT : %f \n",dRet);

    return 0 ;
}