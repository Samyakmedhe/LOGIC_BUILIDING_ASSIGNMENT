#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int Size)
{
    T Sum = 0;
    for(int i = 0; i < Size; i++)
    {
        Sum += Arr[i];
    }
    return Sum;
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    int iSum = Addition(Arr1, iSize);
    cout << "Addition of integer array: " << iSum << "\n";

    float Arr2[] = {1.5, 2.5, 3.0};
    int fSize = 3;

    float fSum = Addition(Arr2, fSize);
    cout << "Addition of float array: " << fSum << "\n";

    return 0;
}
