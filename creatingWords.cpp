#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    string a , b;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        swap(a[0],b[0]);

        cout << a << " " << b;
        cout << endl;
    }
}