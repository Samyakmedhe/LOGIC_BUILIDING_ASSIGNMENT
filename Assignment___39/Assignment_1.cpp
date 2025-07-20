#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
    for(int iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << Value << " ";
    }
    cout << "\n";
}

int main()
{
    Display<int>(11, 5);      
    Display<float>(3.14f, 3); 
    Display<char>('A', 4); 

    return 0;
}
