#include <iostream>
using namespace std;

int Min(int n, int m)
{
    int min = 0;
    min = n < m ? n : m;
    return min;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << Min(n, m) << endl;
}