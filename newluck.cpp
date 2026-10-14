#include <iostream>
using namespace std;

int main(){
int n = 7474;
int lucky=0;
while(n > 0){
    if(n % 10 == 7 || n % 10 == 4){
        lucky++;
        n = n / 10;
    } else if(n % 10 != 7 || n % 10 == 4){
        cout <<"no";
        break;
    }
    
}
if(lucky >0){
        cout << "yes";
    }
}