#include <iostream>
using namespace std;

int main(){
    int m = -10003;
    if(m > 0){
        cout << m;
    } else {
        int i = m / 10;
        int j = (m/100) * 10 +  m % 10;
        cout << max(i,j);
    }
    return 0;
}