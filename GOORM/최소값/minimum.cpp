#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i, min = 0;
    cin >> i;
    std::vector<int> arr(i);

    for (int j = 0; j < i; j++)
    {
        cin >> arr[j];
    }

    min = arr[0];
    for (int j = 0; j < i; j++)
    {
        if (min > arr[j])
            min = arr[j];
    }

    cout << min << endl;

    return 0;
}