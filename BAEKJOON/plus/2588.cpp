#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    cout << n * (m % 10) << endl;
    cout << n * ((m / 10) % 10) << endl;
    cout << n * (m / 100) << endl;       
    cout << n * m << endl;
}
