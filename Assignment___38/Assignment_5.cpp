#include<iostream>
using namespace std;

template <class T>
T Min(T Arr[], int Size)
{
    T iMin = Arr[0];
    for(int i = 0; i < Size; i++)
    {
        if(iMin > Arr[i])
        {
            iMin = Arr[i];
        } 
    }
    return iMin;
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    int iMin = Min(Arr1, iSize);
    cout << "Minimum of integer array: " << iMin << "\n";
    
    float Arr2[] = {1.5, 2.5, 3.0};
    int fSize = 3;

    float fMin = Min(Arr2, fSize);
    cout << "Minimum of float array: " << fMin << "\n";

    return 0;
}
