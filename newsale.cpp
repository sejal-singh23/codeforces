#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    int nums[n];
    for(int i = 0; i < n;i++){
        cin >> nums[i];
    }
    int sum = 0;
    sort(nums,nums+n);
    for(int i = 0; i < m;i++){
        if(nums[i] < 0){
            sum = sum + nums[i];
        } else {
            break;
        }
    }
    cout << -sum;
    
}