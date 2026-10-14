#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] != '4' && s[i] != '7'){
            count++;
            break;
        } else if(s[i] == '4'){
            count = 0;
        } else if(s[i] == '7'){
            count = 0;
        }
    }
    if(count > 0){
        cout << "NO";
    } else if(count == 0){
        cout << "YES";
    }
}