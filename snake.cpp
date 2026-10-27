#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 9;
    int m = 9;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m;j++){
                cout << "#";
            }
            
        } else{
            for(int j = 0; j < m-1; j++){
                cout << ".";
            }
            cout << "#";
        }

    }
}