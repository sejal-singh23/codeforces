#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }

    for (int i = 0; i < b.size(); i++) {
        b[i] = tolower(b[i]);
    }
    for(int i = 0; i < a.size();){
        if(a[i]>b[i]){
            cout << 1;
            return 0;
            
        } else if(a[i]<b[i]){
            cout << -1;
            return 0;
        }
        
    }
    cout << 0;


}