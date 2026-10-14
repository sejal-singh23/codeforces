#include <iostream>
using namespace std;

int main()
{

    int k;
    cin >> k;
    int n;
    cin >> n;
    int w;
    cin >> w;
    int sum = 0;
    int final;

    for (int i = 0; i < w; i++)
    {
        int final = k * (i + 1);
        sum = sum + final;
    }
    if(sum < n){
        cout << 0;
    } else {
        int borrow = sum - n;
        cout << borrow;
    }
    
}
