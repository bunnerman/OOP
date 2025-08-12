#include <iostream>
#include <string>
using namespace std;

class first
{
private: 
    int num;
public:
    void getdata()
    {
        cout << "Enter number 1: ";
        cin >> num;
    }
    int returndata()
    {
        return num;
    }
};
class second
{
private: 
    int num;
public:
    void getdata()
    {
        cout << "Enter number 2: ";
        cin >> num;
    }
    int returndata()
    {
        return num;
    }
};

int func(first &obj1, second &obj2)
{
    int n1, n2;
    n1 = obj1.returndata();
    n2 = obj2.returndata();
    if (n1 == n2)
        return 0;
    else if (n1 > n2)
        return 1;
    else
        return 2;
}

int main()
{
    first obj1;
    second obj2;

    obj1.getdata();
    obj2.getdata();

    int result = func(obj1, obj2);
    if (result == 0)
        cout << "Both numbers are equal";
    else if (result == 1)
        cout << "Number 1 is greater";
    else if (result == 2)
        cout << "Number 2 is greater";
    else
        cout << "Error, wrong return value returned";
        
    return 0;
}