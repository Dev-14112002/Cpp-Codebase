#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// Output: This program prints a square pattern of asterisks with the specified number of rows and columns.