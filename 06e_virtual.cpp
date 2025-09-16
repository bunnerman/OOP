#include <iostream>
#include <string>
using namespace std;

class Base
{
    protected:
    int v1;
};

class D1: virtual public Base
{
    protected:
    int v2;
};

class D2: virtual public Base
{
    protected:
    int v3;
};

class D3: public D1, public D2
{
    public:
    void getData()
    {
        cout << "Enter v1: ";
        cin >> v1;
        cout << "Enter v2: ";
        cin >> v2;
        cout << "Enter v3: ";
        cin >> v3;
    }
    void putData()
    {
        cout << "Value 1: " << v1 << "\n";
        cout << "Value 2: " << v2 << "\n";
        cout << "Value 3: " << v3 << "\n";
    }
};

int main()
{
    D3 obj;
    obj.getData();
    obj.putData();
    return 0;
}