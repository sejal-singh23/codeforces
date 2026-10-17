#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;

    int oddCount = (n+1)/2;

    if(k <= oddCount){
        cout << 2 * (k-1);
    } else {
        cout << 2 * (k-oddCount);
    }

}