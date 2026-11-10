#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, p, q, x;
    cin >> n;

    set<int> s;

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        s.insert(x);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        s.insert(x);
    }

    if (s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}