#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int k;
    cin >> k;
    int num[12];
    for(int i = 0; i < 12; i++){
        cin >> num[i];
    }
    if(k == 0){
        cout << 0;
        return 0;
    }
    sort(num, num+12, greater<int>());

    int sum = 0;

    for(int i = 0; i < 12; i++){

        sum += num[i];

        if(sum >= k){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
}