#include <iostream>
#include <string>
using namespace std;

class RectangleArea
{
    private:
    int length;
    int breadth;
    public:
    RectangleArea()
    {
        length = 0;
        breadth = 0;
    }
    RectangleArea(int l, int b)
    {
        length = l;
        breadth = b;
    }
    RectangleArea(int l)
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
    int l, b;
    cout << "Enter length of Lab: ";
    cin >> l;
    cout << "Enter Breadth of Lab: ";
    cin >> b;
    RectangleArea obj(l, b);
    obj.putData();
    cout << "Enter length of side of classroom: ";
    cin >> l;
    RectangleArea obj2(l);
    obj2.putData();
}
