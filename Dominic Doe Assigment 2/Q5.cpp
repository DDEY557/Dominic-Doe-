#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout << "Enter numbers: ";
    cin >> number;

    while (number % 3 == 0)
    {
        sum = sum + number;
        cin >> number;
    }

    cout << "Sum of multiples of 3 = "
         << sum << endl;

    return 0;
}