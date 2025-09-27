#include <iostream>
#include <string>
using namespace std;

class Example
{
    int value;

public:
    Example(int v)
    {
        value = v;
    }
    Example operator- () 
    {
        return Example(--(this->value));
    }   
    void putData()
    {
        cout << value << "\n";
    }
};

int main()
{
    Example n1(10);
    Example n3 = -n1;

    n3.putData();

    return 0;
}
