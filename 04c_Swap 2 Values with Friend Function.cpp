#include <iostream>
using namespace std;

class example
{
private:
    int n1, n2;
public:
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;
    }
    void displaydata()
    {
        cout << "n1 = " << n1 << "\n";
        cout << "n2 = " << n2 << endl;   
    }
    friend void swapdata(example &obj); 
};

void swapdata(example &obj)
{
    int t;

    t = obj.n1;
    obj.n1 = obj.n2;
    obj.n2 = t; 
}

int main()
{
    example obj;
    obj.getdata();
    obj.displaydata();
    swapdata(obj);
    cout << "Variables swapped\n";
    obj.displaydata();

    return 0;
}