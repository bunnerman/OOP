#include <iostream>
using namespace std;

class Summation
{
private:
    int sum = 0;
    int n = 5; // predetermined
public:
    Summation()
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
    Summation a;
    a.displayData();
    return 0;
}