#include <iostream>
#include <queue>
using namespace std;

template <typename T>
void queueDisplay(queue <T> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main()
{
    queue <int> q;

    int choice;
    int val;
    cout << "<----------MENU---------->\n";
    cout << "0. Exit\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Display Queue\n";
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
                q.push(val);
                break;
            case 2:
                q.pop();
                break;
            case 3:
                queueDisplay(q); // cuz pass by value it automatically makes a copy so no copy handling required
                break;
            case 4:
                cout << "Size is " << q.size() << "\n";
                break;
            default:
                cout << "INVALID CHOICE OF INTEGER! Choose Again\n";
                break;
        }
    }

    return 0;
}
