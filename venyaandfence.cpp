#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int y;
    int count = 0;
    for(int i = 0; i <n;i++){
        cin >> y;
        if(y>x){
            count++;
        }

    }
    cout << count+n;


}