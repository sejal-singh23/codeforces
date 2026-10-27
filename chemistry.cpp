#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int hash[27] = {0};
        int odd = 0;

        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a'] += 1;
        }
        for (int i : hash)
        {
            if (i % 2 == 0)
            {
            }
            else
            {
                odd = odd + 1;
            }
        }
        if (odd <= k + 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}