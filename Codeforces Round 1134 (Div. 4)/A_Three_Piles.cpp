#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int d_2 = 0, d_1 = 0;

        if (abs(a - b) == 1) d_1++;
        else if (abs(a - b) == 2) d_2++;

        if (abs(a - c) == 1) d_1++;
        else if (abs(a - c) == 2) d_2++;

        if (abs(b - c) == 1) d_1++;
        else if (abs(b - c) == 2) d_2++;

        if (d_1 == 2 && d_2 == 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}