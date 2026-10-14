#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){

    string s = "seJal";
    
    s[0] = toupper(s[0]);

    cout << s << endl;
    
}