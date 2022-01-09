#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;

    int i = 0;
    int j = 0;
    while (1)
    {
        j++;
        if (j > m)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "#";
        }
        cout << endl;
        j++;

        if (j > m)
        {
            break;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << ".";
        }
        cout << "#";
        cout << endl;
        j++;

        if (j > m)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "#";
        }
        cout << endl;
        j++;

        if (j > m)
        {
            break;
        }
        cout << "#";
        for (int i = 0; i < n - 1; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
}