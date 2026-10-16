#include <iostream>
using namespace std;

int main(){
    int n , a, b;
    cin >> n;
    int count=0;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        if(b - a >= 2){
            count = count + 1;
            
        }
    }
    cout << count;
    
        
    
}