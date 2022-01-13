#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    if (H >= 0 && H <= 23)
    {
        if (M >= 45 && M < 60)
        {
            M = M - 45;
        }
        else if (M < 45 && M >= 0)
        {
            if(H==0){
                M = 60 - (45 - M);
                H = 23;
            }
            else{
                M = 60 - (45 - M);
                H = H - 1;
            }
            
        }
    }
    cout << H << " " << M << endl;      
}