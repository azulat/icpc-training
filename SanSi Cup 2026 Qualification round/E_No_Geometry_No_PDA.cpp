#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << abs(x1 * y2 - x2 * y1) << "\n";
    }

    return 0;
}