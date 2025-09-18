#include <iostream>
#include <string>
using namespace std;

class Weather
{
    private:
    int temp;
    int humidity;
    public:
    Weather()
    {
        temp = 20;
        humidity = 40;
        this->putData();    
    }
    void putData()
    {
        cout << "Temperature- " << temp << "\n";
        cout << "Humidity- " << humidity << "\n";
    }
};

int main()
{
    Weather obj;
}
