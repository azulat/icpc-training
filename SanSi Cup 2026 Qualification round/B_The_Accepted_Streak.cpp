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

        string c, s;
        cin >> c >> s;
        
        int c_streak = 0, s_streak = 0;
        int c_max_streak = 0, s_max_streak = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] == 'A') {
                c_max_streak = max(c_max_streak, ++c_streak);
            } else {
                c_streak = 0;
            }

            if (s[i] == 'A') {
                s_max_streak = max(s_max_streak, ++s_streak);
            } else {
                s_streak = 0;
            }
        }

        if (c_max_streak > s_max_streak) {
            cout << "C" << "\n";
        } else if (c_max_streak < s_max_streak) {
            cout << "S" << "\n";
        } else {
            cout << "F" << "\n"; 
        }
    }

    return 0;
}