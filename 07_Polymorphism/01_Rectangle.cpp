#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(int l)
    {
        length = l;
        breadth = l;
    }
    void putData()
    {
        cout << "Area = " << (length * breadth) << "\n";
    }
};

int main()
{
    Rectangle obj;
    obj.putData();
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter Breadth: ";
    cin >> b;
    Rectangle obj2(l, b);
    obj2.putData();
    Rectangle obj3(l);
    obj3.putData();
}
