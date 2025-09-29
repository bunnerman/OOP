#include <iostream>
#include <string>
using namespace std;

class Example
{
    private:
    int value;

    public:
    Example(int v)
    {
        value = v;
    }   
    Example operator++ ()
    {
        int t = this->value + 1;
        return Example(t);
    }
    Example operator++ (int) // to distinguish from pre increment overload 
    {
        int t = this->value + 1;
        return Example(t);
    }   
    void putData()
    {
        cout << value << "\n";
    }
};

int main()
{
    Example n1(10);
    Example n2 = ++n1;
    n2.putData();
    Example n3 = n2++;  
    n3.putData();

    return 0;
}
