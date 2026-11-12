#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size() - 1;
    for (int i = n; i >= 0; i--)
    {
        if (s[i] != ' ' && s[i] != '?')
        {
            if (s[i] == 'e' || s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' ||
                s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "NO";
                break;
            }
        }
    }
}