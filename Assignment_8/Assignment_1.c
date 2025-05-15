#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14;
    double Area = 0.0;
    Area = fPI * fRadius * fRadius;
    return Area;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %.4lf ",dRet);
    
    
    return 0 ;
}