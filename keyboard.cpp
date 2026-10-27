#include<iostream>
#include<string>
using namespace std;

int main(){
    string given = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string direction;
    cin >> direction;
    string s;
    cin >> s;
    string newS = "";
    

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < given.size(); j++){
            if(s[i] == given[j]){
                if(direction == "R"){
                    newS += given[j-1];
                } else if(direction == "L"){
                    newS += given[j+1];
                }
            }

        }
    }
    cout << newS;
}