#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a,b;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if(a > b){
            cout << b << " ";
            cout << a << " ";
            
        } else{
            cout << a << " ";
            cout << b << " ";
           
        }
    }


}