#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int s = 1; s <= count - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// Output: This program prints a right-aligned triangle pattern of asterisks.