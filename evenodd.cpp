#include <iostream>
using namespace std;

int main(){
    int n = 10;
    long long number = 0;
    for(int i = 0; i < n;i++){
        if(i % 2 != 0){
            number  = number * 10 + i;
            
        }   
    }
    for(int j = 1; j <= n; j++){
        if(j % 2 == 0){
            number = number * 10 + j;
        }
    }
    cout << number;
}