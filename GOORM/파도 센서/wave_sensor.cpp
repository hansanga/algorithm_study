#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, r, x1, y1, min, c;
    double d[5];
    cin >> x >> y >> r;
    for (int i = 0; i < 5; i++)
    {
        cin >> x1 >> y1;
        d[i] = sqrt(pow(x - x1, 2) + (pow(y - y1, 2)));
    }

    min = 1000;
    c = -1;
    for (int j = 0; j < 5; j++)
    {
        if (min > d[j] && d[j] <= r)
        {
            min = d[j];
            c = j;
        }
    }
    if (c == -1)
        cout << -1 << endl;

    else
        cout << c + 1 << endl;
}