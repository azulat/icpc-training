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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int manual = 0;
        char cur = 'R';
        for (const char c : s) {
            if (c != cur) {
                manual++;
                continue;
            }
            
            cur = cur == 'R' ? 'B' : 'R';
        }

        cout << manual << "\n";
    }

    return 0;
}