#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int min = 0;
    cin >> n >> m;
    min = n < m ? n : m;
    cout << min << endl;
}