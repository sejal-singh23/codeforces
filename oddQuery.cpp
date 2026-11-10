#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int k = 3;
    int x = 10;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < k; j++){
        sum = sum + j;
        }
    
    if(sum == x){
        cout << sum;
        cout << "yes";
    } else {
        cout << sum;
        cout <<"no";
    }
}
}
    