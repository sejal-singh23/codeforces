#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        cin >> n;
        int rem = n % 10;
        n = n / 10;
        int sum = rem + n;
        cout << sum;
    }
}