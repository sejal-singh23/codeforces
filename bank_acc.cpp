#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x , y, ans;
    if(n > 0){
        cout << n;
    } else {
        x = n % 10;   
        n = n / 10;   
        y = n % 10;  
        if(x > y){
            n = n / 10;  
            ans = n * 10 + x; 
        } else {
            ans = n;
        }
        cout << ans; 
    }
    
}