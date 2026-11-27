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

        switch (n % 12) {
        case 0:
            cout << 0 << "\n";
            break;
        case 1:
        case 11:
            cout << 5 << "\n";
            break;
        case 2:
        case 10:
            cout << 2 << "\n";
            break;
        case 3:
        case 9:
            cout << 3 << "\n";
            break;
        case 4:
        case 8:
            cout << 4 << "\n";
            break;
        case 6:
            cout << 6 << "\n";
            break;
        case 5:
        case 7:
            cout << 1 << "\n";
            break;
        }
    }

    return 0;
}