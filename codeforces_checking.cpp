#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    for(int i =0; i< t; i++){
        cin >> s;
        if(s == "c" || s== "o" || s == "d" || s == "e" || s == "f" || s == "r" ||  s == "s" ){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }

    }
}