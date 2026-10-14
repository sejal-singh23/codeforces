#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;
    int n;
    cin >> n;
    int k;
    cin >> k;
    for(int i = 0; i <=n;i++){
        if(i % 2 != 0){
            arr.push_back(i);
        }
    }
    for(int i = 1;i <= n;i++){
        if(i % 2 == 0){
            arr.push_back(i);
        }
    }
    cout << arr[k-1];

}