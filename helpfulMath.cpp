#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "3+1+2";
    string digit = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            digit = digit + s[i];
        }

    }
    sort(digit.begin(),digit.end());
    for(int i = 0; i < digit.size(); i++){
        cout << digit[i];

        if(i < digit.size()-1){
            cout << "+";
        }
    }
}