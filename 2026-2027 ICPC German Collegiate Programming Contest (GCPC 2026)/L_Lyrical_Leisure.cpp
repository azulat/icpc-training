#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    string out = "";

    for (int i = 0; i < (n - k) / 3; i++) {
        out += "abc";
    }

    if ((n - k) % 3 == 1) {
        out += "a";
    } else if ((n - k) % 3 == 2) {
        out += "ab";
    }

    for (int i = n - k; i < n; i++) {
        out += "d";
    }

    cout << out;

    return 0;
}