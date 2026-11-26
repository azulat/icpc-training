#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;

        if (b >= a) cout << a << "\n";
        else {
            ull k = (a + b - 1) / b;

            ull out = (a * k) - (b * k * (k - 1) / 2);
            cout << out << "\n";
        }
    }

    return 0;
}