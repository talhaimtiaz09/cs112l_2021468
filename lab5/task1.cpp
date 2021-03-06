#include <iostream>
using namespace std;
class Heater
{
private:
    int temperature;

public:
    // constructor
    Heater()
    {
        temperature = 15;
    }
    // Parameterized contructor
    Heater(int temp)
    {
        temperature = temp;
    }
    // Destructor
    ~Heater() {}

    // fucntion to increase temperature by 5 degree
    void warmer()
    {
        temperature += 5;
    }
    // fucntion to decrease temperature by 5 degree
    void cooler()
    {
        temperature -= 5;
    }
    void print()
    {
        cout << "Temperature = " << temperature << endl;
    }
};

int main()
{
    Heater obj;
    bool loop = true;
    int option;
    while (loop)
    {
        cout << "\n********************************\n";
        cout << "Press 0 to get value of temp\nPress 1 for cooling\nPress 2 for heating\nPress 3 to exit" << endl;
        cout << "Enter your option: ";
        cin >> option;
        switch (option)
        {
        case 0:
            obj.print();
            break;

        case 1:

            obj.cooler();
            obj.print();
            break;

        case 2:

            obj.warmer();
            obj.print();
            break;

        case 3:
            loop = false;
            break;
        default:
            cout << "PLease enter only valid input!" << endl;
        }
    }

    return 0;
}