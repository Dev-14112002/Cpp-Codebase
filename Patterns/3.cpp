#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = count; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
// Output: This program prints an inverted right-aligned triangle pattern of asterisks with the specified number of rows.