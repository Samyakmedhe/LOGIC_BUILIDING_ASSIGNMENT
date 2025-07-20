#include<iostream>
using namespace std;

template <class T>
T Max(T Arr[], int Size)
{
    T iMax = Arr[0];
    for(int i = 0; i < Size; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        } 
    }
    return iMax;
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    int iMax = Max(Arr1, iSize);
    cout << "Maximum of integer array: " << iMax << "\n";
    
    float Arr2[] = {1.5, 2.5, 3.0};
    int fSize = 3;

    float fMax = Max(Arr2, fSize);
    cout << "Maximum of float array: " << fMax << "\n";

    return 0;
}
