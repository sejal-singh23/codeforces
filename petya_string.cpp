#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }

    for (int i = 0; i < b.size(); i++) {
        b[i] = tolower(b[i]);
    }
    int sum_a = 0;
    for(int i = 0; i < a.size(); i++){
        sum_a = sum_a + a[i];

    }
    int sum_b = 0;
    for(int i = 0; i < b.size(); i++){
        sum_b = sum_b + b[i];

    }
    if(sum_a==sum_b){
        cout << 0;
    } else if (sum_a>=sum_b){
        cout << 1;
    } else {
        cout << -1;
    }

    
}