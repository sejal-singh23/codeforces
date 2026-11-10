#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;

    if(x >= 1900){
        cout << "Division 1" << endl;
    } else if(x >= 1600){
        cout << "Division 2" << endl;
    } else if(x >= 1400){
        cout << "Division 3" << endl;
    } else{
        cout << "Division 4" << endl;
    }
}
}