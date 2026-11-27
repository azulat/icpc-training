#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        vector<int> scount(26, 0), tcount(26, 0);
        for (int i = 0; i < n; i++) {
            scount[(int)s[i] - 97]++;
            tcount[(int)t[i] - 97]++;
        }

        if (scount == tcount) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}