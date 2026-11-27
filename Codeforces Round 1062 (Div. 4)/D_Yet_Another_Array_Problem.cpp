#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b) {
    while (b != 0) {
        ull t = b;
        b = a % b;
        a = t;
    }

    return a;
}

ull primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

void solve_tc() {
    int n;
    cin >> n;

    vector<ull> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (const ull p : primes) {
        for (const ull a_i : a) {
            if (gcd(a_i, p) == 1) {
                cout << p << "\n";
                return;
            }
        }
    }

    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve_tc();
    }

    return 0;
}