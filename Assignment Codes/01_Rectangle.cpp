#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    public:
    Rectangle(int l, int b)
    {
        int area;
        area = l * b;
        cout << "Area of Rectangle is " << area << "\n";
    }
};

int main()
{
    Rectangle obj(5, 10);
}
