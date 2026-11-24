#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> ps(n + 1);
    ps[0] = 0;
    for (int i = 1; i <= n; i++) ps[i] = ps[i - 1] + a[i - 1];

    vector<int> ss(n + 1);
    ss[n] = 0;
    for (int i = n - 1; i >= 0; i--) ss[i] = ss[i + 1] + a[i];
    reverse(ss.begin(), ss.end());

    while (q--) {
        int x, y;
        cin >> x >> y;

        int i = upper_bound(ss.begin(), ss.end(), x) - ss.begin() - 1;
        int j = upper_bound(ps.begin(), ps.end(), y) - ps.begin() - 1;

        if (j > n - i) j = n - i;

        cout << i << " " << j << "\n";
    }

    return 0;
}