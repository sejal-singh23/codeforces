#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<char> mySet;
    char s;
    while(true){
        cin >> s;
        if(s == '{' || s == ','){
            continue;
        } else if(s == '}'){
            break;
        }
        mySet.insert(s);
    }
    cout << mySet.size();
    
    
}