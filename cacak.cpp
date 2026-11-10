#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int k = 3;
    //int x = 10;
    int ans = 0;

    for(int i = n; i > 0; i--){
        while(k >= 0){
            ans = ans + i;
            k--; 
        }
    }
    cout << ans;
}