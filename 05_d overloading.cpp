#include <iostream>
using namespace std;

class Summation
{
private:
    int sum = 0;
public:
    Summation(int n)
    {
        while (n > 0)
            sum += n--;
    }
    Summation(int n, int start)
    {
        while (n >= start) // sum of numbers within a range
            sum += n--;
    }
    void displayData()
    {
        cout << "Sum is " << sum << "\n";
    }
};

int main()
{
    int n, n2;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of starting point of summation: ";
    cin >> n2;
    Summation a(n);
    Summation b(n, n2);
    a.displayData();
    b.displayData();
    return 0;
}