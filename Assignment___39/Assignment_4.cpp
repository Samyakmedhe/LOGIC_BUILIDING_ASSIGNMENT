#include<iostream>
using namespace std;

template <class T>
int LastOcc(T Arr[], int Size, T iNo)
{
    int iPos = -1;

    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] == iNo)
        {
            iPos = i;  
        }
    }
    return iPos;  
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 20, 50, 20, 60};
    int iSize = 8;

    int iPos = LastOcc(Arr1, iSize, 20);
    cout << "Last occurrence of 20 in integer array at index: " << iPos << "\n";

    float Arr2[] = {1.5, 2.5, 3.0, 2.5, 4.5};
    int fSize = 5;

    int fPos = LastOcc(Arr2, fSize, 2.5f);
    cout << "Last occurrence of 2.5 in float array at index: " << fPos << "\n";

    return 0;
}
