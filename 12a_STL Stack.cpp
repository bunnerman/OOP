#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;

    int choice;
    int val;
    cout << "<----------MENU---------->\n";
    cout << "0. Exit\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek\n";
    cout << "4. Size\n";

    scanf("%d", &choice);
    while (1)
    {
        cout << "Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 0:
                return 0;
            case 1:
                cout << "Enter Value: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout << "Element on top is " << s.top() << "\n";
                break;
            case 4:
                cout << "Size is " << s.size() << "\n";
                break;
            default:
                cout << "INVALID CHOICE OF INTEGER! Choose Again\n";
                break;
        }
    }

    return 0;
}
