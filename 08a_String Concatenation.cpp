#include <iostream>
#include <string>
using namespace std;

class Example 
{
    private:
    string str;
    public:
    Example(string s = "") 
    {
        str = s;
    }

    Example operator+(Example& str2) 
    {
        return Example(str + str2.str); // just use std::string + 
    }

    void display() 
    {
        cout << str << "\n";
    }
};

int main() 
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    Example obj1(s1);
    Example obj2(s2);

    Example obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}
