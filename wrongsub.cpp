#include <iostream>
using namespace std;

int main(){
    int k;
    int n;
    cin >> k;
    cin >> n;
    
    while(n > 0){
        if(k % 10 == 0){
            k = k / 10;
        } else {
            k = k-1;
        }
        n--;
    }
    cout << k;

}