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
        vector<bool> changes(26, false);

        int n;
        cin >> n;

        string aux;
        cin >> aux;

        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            s[i] = ((int)(aux[i])) - 97;
        }

        int i = 0, j = n - 1;
        int min_op = 0;
        while (i < j) {
            for (int c = max(s[i], s[j]); c > min(s[i], s[j]); c--) {
                if (!changes[c]) {
                    min_op++;
                    changes[c] = true;
                }
            }

            i++; j--;
        }

        cout << min_op << "\n";
    }

    return 0;
}