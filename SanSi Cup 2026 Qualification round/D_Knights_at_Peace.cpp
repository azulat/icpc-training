#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ull n;
        cin >> n;

        if (n <= 2) {
            cout << n * n;
        } else {
            cout << ((n / 2) + (n % 2)) * ((n / 2) + (n % 2)) + (n / 2) * (n / 2);
        }

        cout << "\n";
    }

    return 0;
}