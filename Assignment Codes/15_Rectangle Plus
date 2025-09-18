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
    Rectangle obj2(6, 7);
    obj2.putData();
    Rectangle obj3(5);
    obj3.putData();
}
