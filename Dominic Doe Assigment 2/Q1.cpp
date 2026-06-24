#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter positive integers (enter a negative number to stop): " << endl;

    while (true)
    {
        cin >> num;

        if (num < 0)
        {
            break;   // Stop when a negative number is entered
        }

        sum = sum + num;
    }

    cout << "The sum of all positive numbers entered is: " << sum << endl;

    return 0;
}