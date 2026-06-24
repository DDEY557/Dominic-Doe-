#include <iostream>
using namespace std;

int main()
{
    char ch;
    int vowelCount = 0;

    cout << "Enter characters (q to stop): ";
    cin >> ch;

    while (ch != 'q')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowelCount++;
        }

        cin >> ch;
    }

    cout << "Number of vowels entered = "
         << vowelCount << endl;

    return 0;
}