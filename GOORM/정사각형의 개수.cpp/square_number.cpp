#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long n, sum = 0;
    cin >> n;
    for (long i = n; i > 0 && n <= 1000000; i--)
    {
        sum += i * i;
    }
    cout << sum << endl;
}
