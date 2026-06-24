#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 5, 20, 3, 15};

    int smallest = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest number = " << smallest;

    return 0;
}