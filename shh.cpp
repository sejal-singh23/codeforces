#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    if(s == "4"){
        cout << "yes";
    }
     
    for(int i = 0; i < n; i++){

        if(s[i] != '4' && s[i] != '7'){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

}