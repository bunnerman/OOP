#include <iostream>
using namespace std;

class r2; // fwd declaration
class r1
{
private:
    int marks;

public:
    void getdata()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    friend int func(r1, r2);
};

class r2
{
private:
    int marks;

public:
    void getdata()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    friend int func(r1, r2);
};

int func(r1 mk1, r2 mk2)
{
    return (mk1.marks + mk2.marks);
}

int main()
{
    class r1 res1[5];
    class r2 res2[5];
    int i;

    cout << "Enter values for class 1 (five values)-\n";
    for (i = 0; i < 5; i++)
        res1[i].getdata();

    cout << "Enter values for class 2 (five values)-\n";
    for (i = 0; i < 5; i++)
        res2[i].getdata();

    int sum = 0;
    for (i = 0; i < 5; i++)
        sum += func(res1[i], res2[i]);

    float avg = (float) sum / 2;
    printf("Average of total marks of both students is %f\n", avg);

    return 0;
}