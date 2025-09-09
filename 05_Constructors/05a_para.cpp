#include <iostream>
using namespace std;

class Summation
{
private:
    int sum = 0;
public:
    Summation(int n)
    {
        while (n >= 0)
            sum += n--;
    }

    void displayData()
    {
        cout << "Sum is " << sum;
    }
};

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    Summation a(n);
    a.displayData();
    return 0;
}