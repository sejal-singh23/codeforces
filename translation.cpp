#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    for(int i = 0; i < s1.size()/2;i++){
        swap(s1[i],s1[s1.size()-1-i]);
    }
    if(s1==s2){
        cout << "YES";
    } else {
        cout << "NO";
    }
}