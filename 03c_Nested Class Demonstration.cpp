#include <iostream>
using namespace std;

class Outer
{
    private:
    int num = 1;
    public:
    class Inner
    {
        private:
        int num = 2;
        public:
        void displaydata()
        {
            cout << "Value of num (Inner) is " << num << endl;
        }
    };
    void displaydata()
    {
        cout << "Value of num (Outer) is " << num << endl;
    }
};

int main()
{
    Outer obj1;
    Outer::Inner obj2;
    obj1.displaydata();
    obj2.displaydata();

    return 0;
}