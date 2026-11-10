#include <iostream>
#include <unordered_set>
#include <cctype>
#include <string>
using namespace std;

int main(){
    unordered_set<char>s;
    string str;   // diff btw cin and getline cin - it stops taking input after getting spaces but getline counts every thing scpaces.,until it found\n
    getline(cin,str);
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(isalpha(str[i])){
            s.insert(str[i]);
        }
    }
    cout << s.size();
}