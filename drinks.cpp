#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    int sum = 0;
    for(int i = 0; i < n;i++){
        cin >> k;
        sum = sum + k;
      
    }
    double avg = (sum*1.0) / n;
    cout << avg;
}

