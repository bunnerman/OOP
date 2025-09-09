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
        //nothing to do here
    }
    Summation(Summation &obj) // Only copy constructor can sum
    {
        while (n >= 0)
            sum += n--;
    }

    void displayData()
    {
        cout << "Sum is " << sum << "\n";
    }
};

int main()
{
    int n;
    Summation a;
    Summation b(a);
    a.displayData(); // Will Display 0
    b.displayData(); 
    return 0;
}