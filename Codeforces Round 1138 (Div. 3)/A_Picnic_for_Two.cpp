#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        vector<pair<bool, bool>> slices(l, make_pair(false, false));

        int i = 0;
        while (true) {
            int j = (i * a) % l;
            if (slices[j].first) break;
            slices[j].first = true;

            i++;
        }

        int ideal = 0;

        i = 0;
        while (true) {
            int j = (i * b) % l;
            if (slices[j].second) break;
            if (slices[j].first) ideal++;

            slices[j].second = true;

            i++;
        }

        cout << ideal << "\n";
    }

    return 0;
}