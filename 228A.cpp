#include <iostream>
#include <unordered_set>
using namespace std;


int main(){
    unordered_set<int>s;
    int color;
    
    for(int i = 0; i < 4; i++){
        cin >> color;
        
        s.insert(color);
    }
    if(s.size()==4){
        cout << 0;

    } else {
        cout << 4 - s.size();
    }
}
