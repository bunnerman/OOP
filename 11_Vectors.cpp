#include <iostream>
#include <vector>
using namespace std;

template <class T>
class VectorClass
{
private:
    vector<T> v;

public:
    void createVector(int n)
    {
        T tempVal;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> tempVal;
            v.push_back(tempVal);
        }
    }

    void modifyVector(int index, T newVal)
    {
        if (index >= 0 && index < v.size())
            v[index] = newVal;
        else
            cout << "OUT OF BOUNDS" << "\n";
    }

    void scaleVector(int scalarVal)
    {
        for (int i = 0; i < v.size(); i++)
            v[i] *= scalarVal;
    }

    void displayVector()
    {
        cout << "(";
        for (int i = 0; i < v.size(); i++)
        {
            if (i == v.size() - 1)
                cout << v[i];
            else 
                cout << v[i] << ", ";
        }
        cout << ")\n";
    }
};

int main()
{
    VectorClass <int> v1;

    int n1;
    int n2;
    cout << "Number of elements?: ";
    cin >> n1;
    v1.createVector(n1);
    v1.displayVector();

    cout << "Select index to modify: ";
    cin >> n1;
    cout << "Enter new number of that index: ";
    cin >> n2;
    v1.modifyVector(n1, n2);
    v1.displayVector();

    cout << "Enter scalar to scale the vector with: ";
    cin >> n1;
    v1.scaleVector(n1);
    v1.displayVector();

    return 0;
}
