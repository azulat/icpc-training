#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int z, x, w;
        cin >> x >> w >> z;

        int n = max(0, 2 * w - x);
        if (n > z) {
            cout << -1 << "\n";
        } else {
            cout << n << "\n";
        }
    }

    return 0;
}