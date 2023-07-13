#include <iostream>
using namespace std;

int main(){
    int n;
    int array[n + 1];
    int min = 1000000;
    int max = -1000000;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> array[i];
        if(min>array[i]){
            min = array[i];
        }
        if(max<array[i]){
            max = array[i];
        }
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}