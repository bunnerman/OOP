#include <iostream>
#include <string>
using namespace std;

class College
{
private:
    int rollNo;
    string name;
    string course;
public:
    College()
    {
        rollNo = 100;
        name = "UNKNOWN";
        course = "Computer Engineering";
    }
    College(int a, string b, string c)
    {
        rollNo = a;
        name = b;
        course = c;
    }
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Course: ";
        cin >> course;
    }

    void displayData()
    {
        cout << "Roll No- " << rollNo << "\n";
        cout << "Name- " << name << "\n";
        cout << "Course- " << course << "\n";
    }
};

int main()
{    
    College s1(200, "examplename", "CSE"); // S for student
    College s2(100, "examplename", "Liberal Arts");
    s1.displayData();
    s2.displayData();

    return 0;
}