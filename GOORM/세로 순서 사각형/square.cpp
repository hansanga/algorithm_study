#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = -(n - 1) + i; j < i + (n * (n - 1));)
        {
            j = j + n;
            cout << j << " ";
        }
        cout << endl;
    }
}