#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

int main(){
    unordered_set<int> st;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }
   
    for(int i = 0; i < n; i++){
        st.insert(s[i]);
    }
    

    if(st.size() == 26){
        cout << "YES";
    } else {
        cout << "NO";
    }
}