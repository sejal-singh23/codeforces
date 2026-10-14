#include <iostream>
#include <unordered_set>
using namespace std;


bool fun(int year){
    unordered_set<int>s;
    while(year>0){
        int last = year % 10;
        year = year / 10;
        s.insert(last);
    }
    if(s.size()==4){
        return true;
    } else {
        return false;
    }

}
int main(){
    int year;
    cin >> year;
    fun(year);
    while(true){
        year++;
        if(fun(year)){
            cout << year;
            break;
        }
    }
}


