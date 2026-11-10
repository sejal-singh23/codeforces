#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 9;
    int m = 9;
    bool at_end = true;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            
        }
        else
        {
            if (at_end)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else {
                for (int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "#";
            }
        }
        at_end = !at_end;
    }
    cout <<endl;
}