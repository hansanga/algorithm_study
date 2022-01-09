
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int c = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == '3' || str[j] == '6' || str[j] == '9')
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}