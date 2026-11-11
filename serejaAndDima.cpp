#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int i = 0;
    int j = n-1;

    int sereja = 0;
    int dima = 0;

    while(i <= j){
        if(arr[i] > arr[j]){
            sereja += arr[i];
            i++;
        } else {
            sereja += arr[j];
            j--;
        }

        if(i <= j){
            if(arr[i] > arr[j]){
                dima += arr[i];
                i++;
            } else {
                dima += arr[j];
                j--;
            }
        }
    }
    cout << sereja << " " << dima;
}