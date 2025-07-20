#include<iostream>
using namespace std;

template <class T>
int Frequency(T Arr[], int Size, T iNo)
{
    int iFreq = 0;
    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int Arr1[] = {10, 20, 30, 20, 50, 20};
    int iSize = 6;

    int iFreq = Frequency(Arr1, iSize, 20);
    cout << "Frequency of 20 in integer array: " << iFreq << "\n";

    float Arr2[] = {1.5, 2.5, 3.0, 2.5, 1.5};
    int fSize = 5;

    int fFreq = Frequency(Arr2, fSize, 2.5f);
    cout << "Frequency of 2.5 in float array: " << fFreq << "\n";

    return 0;
}
