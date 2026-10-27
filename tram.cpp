#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a , b;
    int sum = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum = sum - a + b;
        if(sum > maxi){
            maxi = sum;
        }
    }
    cout << maxi;
}