#include <iostream>
using namespace std;

int main()
{
    int number, largest;

    cout << "Enter a number: ";
    cin >> number;

    largest = number;

    cout << "Enter numbers (0 to stop): ";
    cin >> number;

    while (number != 0)
    {
        if (number > largest)
        {
            largest = number;
        }

        cin >> number;
    }

    cout << "Largest number entered = " << largest << endl;

    return 0;
}