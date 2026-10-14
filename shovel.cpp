#include <iostream>
using namespace std;

int main(){
    int k = 15;
    int r = 2;
    int mul;
    int last_digit;
    for(int i = 1; i < 10; i++){
        mul = k*i;
        mul = mul % 10;
        if(mul == r){
            cout << i;
        } else if(mul != r){
            mul = k*i+1;
            cout << i+1;
            break;
        }
    }
    
    

}