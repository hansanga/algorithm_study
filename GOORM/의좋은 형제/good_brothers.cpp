#include <iostream>
using namespace std;

int main()
{
    int n, m, d, c;
    cin >> n >> m;
    cin >> d;

    for (int i = 1; i <= d; i++)
    {

        if (i % 2 != 0)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                m += n;
            }
            else
            {
                n = (n - 1) / 2;
                m = m + n + 1;
            }
        }
        else if (i % 2 == 0)
        {
            if (m % 2 == 0)
            {
                m = m / 2;
                n += m;
            }
            else
            {
                m = (m - 1) / 2;
                n = n + m + 1;
            }
        }
    }
    cout << n << " " << m;
}