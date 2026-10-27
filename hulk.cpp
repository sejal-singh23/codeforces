#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s = "";
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            s += "I love ";
        } else {
            s += "I hate ";
        }
        if(i == n){
            s += "it";
        } else {
            s += "that ";
        }
    }
    cout << s;
}