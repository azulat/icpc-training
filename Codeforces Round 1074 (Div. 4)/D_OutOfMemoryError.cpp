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
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> a_og(n + 1);
        for (int i = 1; i <= n; i++) cin >> a_og[i];
        vector<int> a = a_og;

        unordered_set<int> changed;

        while (m--) {
            int b, c;
            cin >> b >> c;

            a[b] += c;
            changed.insert(b);

            if (a[b] > h) {
                for (const int i : changed) {
                    a[i] = a_og[i];
                }

                changed.clear();
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}