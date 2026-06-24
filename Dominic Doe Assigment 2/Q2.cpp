#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "Enter strings (type done to stop):" << endl;

    cin >> word;

    while (word != "done")
    {
        count++;
        cin >> word;
    }

    cout << "Number of strings entered = " << count << endl;

    return 0;
}