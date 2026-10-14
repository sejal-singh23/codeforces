#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
            a[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + a[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n;i++){
        sum = sum + a[i];
        if(sum > total / 2){
            cout << i+1;
            break;
        }
    }
}