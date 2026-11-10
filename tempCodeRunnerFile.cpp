#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string arr;
    while(t--){
        
        cin >> arr;
    }
    int add_first = 0;
    int add_last = 0;
    for(int i = 0; i < 3; i++){
        add_first = add_first + arr[i] - '0'; 
    }
    for(int i = 5; i >= 3; i--){
        add_last = add_last + arr[i] - '0';
    }
    if(add_first == add_last){
        cout << "YES";
    } else {
        cout << "NO";
    }
}