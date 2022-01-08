#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
        {
            if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
            {
                c = c + 2;
            }
            else
            {
                c = c + 1;
            }
        }
        else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
        {
            c = c + 1;
        }
        /*if ((i / 10 == 3 || i / 10 == 6 || i / 10 == 9) && (i % 10 == 3 || i % 10 == 6 || i % 10 == 9))
        {
            c = c + 2;
        }
        else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
        {
            c = c + 1;
        }
    }*/
        cout << c << endl;
        return 0;
    }