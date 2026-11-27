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
        int n, k, p;
        cin >> n >> k >> p;

        vector<ull> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        vector<ull> ps(n + 1);
        ps[0] = 0;
        for (int i = 1; i <= n; i++) ps[i] = ps[i - 1] + a[i - 1];

        ull joy = 0;

        for (int i = 0; i < n; i += k) {
            if (i + k <= n && ps[i + k] - ps[i] <= p) {
                joy += p;
            } else {
                joy += ps[n] - ps[i];
                break;
            }
        }

        cout << joy << "\n";
    }

    return 0;
}