#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    bool start = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
            else
            {
                if (start)
                {
                    cout << "#";
                    for (int k = 0; k < m - 1; k++)
                    {
                        cout << ".";
                    }
                }
                else
                {
                    for (int k = 0; k < m - 1; k++)
                    {
                        cout << ".";
                    }
                    cout << "#";
                }
                start = !start;
            
        }
        cout << endl;
        
    }
}