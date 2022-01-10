#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char a;
    int c = 0;
    getline(cin, str);
    cin >> a;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == a)
        {
            if ((isupper(str[i])) == (isupper(a)))
            {
                c++;
            }
        }
    }
    cout << c << endl;
}
