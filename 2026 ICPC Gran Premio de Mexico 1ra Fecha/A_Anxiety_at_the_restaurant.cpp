#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    ull bill = 0;
    for (int i = 0; i < n; i++) {
        ull p;
        cin >> p;
        bill += p;
    }

    ull total = 0;
    for (int i = 0; i < m; i++) {
        ull a;
        cin >> a;
        total += a;
    }

    if (total >= bill + ((bill + 9) / 10)) {
        cout << "YES";
    } else {
        cout  << "NO";
    }

    return 0;
}