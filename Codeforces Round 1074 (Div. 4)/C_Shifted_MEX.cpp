#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int cur = 0; int max_chain = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1] + 1) {
                max_chain = max(max_chain, ++cur);
            } else if (a[i] == a[i - 1]) {
                continue;
            } else {
                cur = 0;
            }
        }

        cout << max_chain + 1 << "\n";
    }

    return 0;
}