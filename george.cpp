#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    int b;
    int count=0;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        if(b>a){
            count++;
            
        } else {
            return 0;
        }
    }
    cout << count;
    
        
    
}