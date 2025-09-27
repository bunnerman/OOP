#include <iostream>
#include <string>
using namespace std;

class Summer
{
    public:
    Summer(int *aryInt, int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += aryInt[i]; 
        cout << "Sum (Integers) is " << sum << "\n";
    }
    Summer(float *aryFloat, int size)
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
            sum += aryFloat[i];
        cout << "Sum (Floating Point Integers) is " << sum << "\n";
    }
};

int main()
{
    int aryInt[5];
    float aryFloat[10];
    int i;
    
    cout << "Enter 5 integers: ";
    for (i = 0; i < 5; i++)
        cin >> aryInt[i];

    cout << "Enter 10 floats: ";
    for (i = 0; i < 10; i++)
        cin >> aryFloat[i];

    Summer obj1(aryInt, 5);
    Summer obj2(aryFloat, 10);

    return 0;
}
