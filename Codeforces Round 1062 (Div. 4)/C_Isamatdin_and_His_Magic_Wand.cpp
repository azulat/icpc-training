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

        bool odd = false, even = false;
        for (const int a_i : a) {
            if (a_i % 2 == 0) {
                even = true;
            } else {
                odd = true;
            }
        }

        if (even && odd) {
            sort(a.begin(), a.end());
        }

        for (const int a_i : a) {
            cout << a_i << " ";
        }

        cout << "\n";
    }

    return 0;
}