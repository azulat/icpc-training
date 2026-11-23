#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

constexpr ull N = 1000000ull;
constexpr ull MOD = 1000000007ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> pantries(t);
    for (int i = 0; i < t; i++) {
        cin >> pantries[i];
    }; 

    ull max_pantry = *max_element(pantries.begin(), pantries.end());

    vector<ull> dp(max_pantry + 1, 0);
    dp[0] = 0;
    ull odd = 0; ull even = 0;
    
    for (int i = 1; i <= max_pantry; i++) {
        if (i % 2 == 0) {
            dp[i] = (dp[i - 1] + even * (even - 1) / 2 + odd * (odd - 1) / 2) % MOD;
            even++;
        } else {
            dp[i] = (dp[i - 1] + even * odd) % MOD;
            odd++;
        }
    }

    for (const int i : pantries) {
        cout << dp[i] << "\n";
    }

    return 0;
}