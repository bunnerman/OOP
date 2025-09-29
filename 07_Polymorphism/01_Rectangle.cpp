#include <iostream>
#include <string>
using namespace std;

class RectangleArea
{
    private:
    int length;
    int breadth;
    int area;
    public:
    RectangleArea()
    {
        length = 0;
        breadth = 0;
    }
    void calcData(int l, int b)
    {
        area = l * b;
    }
    void calcData(int l)
    {
        area = l * l;
    }
    void getData()
    {
        cout << "Enter Length of lab: ";
        cin >> length;
        cout << "Enter breadth of lab: ";
        cin >> breadth;
        this->calcData(length, breadth);
    }
    void getData(int )
    {
        cout << "Enter Length of side of classroom: ";
        cin >> length;
        this->calcData(length);
    }
    void putData()
    {
        cout << "Area is " << area << "\n";
    }
};

int main()
{
    RectangleArea obj, obj2;
    obj.getData();
    obj.putData();
    obj2.getData(1); // dummy parameter to indicate that we are now taking area of square
    obj2.putData();
}
