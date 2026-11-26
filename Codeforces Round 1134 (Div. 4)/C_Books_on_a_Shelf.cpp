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

        int visible = 0;
        map<int, int> h;
        for (int i = 0; i < n; i++) {
            int hi;
            cin >> hi;

            auto it = h.find(hi);
            if (it == h.end() || it->second < 2) {
                visible++;
            }

            h[hi]++;
        }

        cout << visible << "\n";

        for (auto [k, v] : h) {
            while (v > 1) {
                cout << k << " ";
                v--;
            }
        }

        for (auto it = h.rbegin(); it != h.rend(); ++it) {
            cout << it->first << " ";
        }

        cout << "\n";
    }

    return 0;
}