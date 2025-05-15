#include<stdio.h>

double RectArea(float Width , float Height)
{
    double Area = 0.0;
    Area = Width * Height;
    return Area;
}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);
    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle : %.3lf ",dRet);
    
    
    return 0 ;
}