#include<iostream>
using namespace std;

template <class T>
void Reverse(T Arr[], int Size)
{
    cout << "Elements in reverse order are:\n";
    for(int i = Size - 1; i >= 0; i--)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    Reverse(Arr1, iSize);

    float Arr2[] = {1.1, 2.2, 3.3};
    int fSize = 3;

    Reverse(Arr2, fSize);

    return 0;
}
