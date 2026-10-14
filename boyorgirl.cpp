#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> myset;
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        myset.insert(str[i]);
    }
    int count = myset.size();

    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

}

