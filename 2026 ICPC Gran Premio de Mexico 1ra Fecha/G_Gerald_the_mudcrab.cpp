#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<bool> found(n + 1, false);
    int duplicates = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (found[a]) duplicates++;
        found[a] = true;
    }

    cout << duplicates;

    return 0;
}