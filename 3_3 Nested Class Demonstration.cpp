#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int dob;
public:
    class Marks
    {
    private:
        int maths;
        int science;
    public:
        void getdata()
        {
            cout << "Enter Maths Marks: ";
            cin >> maths;
            cout << "Enter Science Marks: ";
            cin >> science;
        };
        void displaydata()
        {
            cout << "Maths- " << maths << "\n";
            cout << "Science- " << science << "\n";
        };
    };
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter DOB (but omit /, use 0s): ";
        cin >> dob;
    };
    void displaydata()
    {
        cout << "Name- " << name << "\n";
        cout << "DOB- " << dob << "\n";
    }
};

int main()
{
    Student s1;
    Student::Marks m1;

    s1.getdata();
    s1.displaydata();
    m1.getdata();
    m1.displaydata();
    return 0;
}