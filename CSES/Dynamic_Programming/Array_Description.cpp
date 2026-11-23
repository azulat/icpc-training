#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> x(n + 1);
    for (int i = 1; i <= n; i++) cin >> x[i];

    vector<vector<int>> dp(n + 1, vector<int>(m + 2, 0));
    if (x[1] == 0) {
        for (int i = 1; i <= m; i++) dp[1][i] = 1;
    } else {
        dp[1][x[1]] = 1;
    }

    for (int i = 2; i <= n; i++) {
        if (x[i] == 0) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = dp[i - 1][j];

                dp[i][j] += dp[i - 1][j - 1];
                if (dp[i][j] >= MOD) dp[i][j] -= MOD;

                dp[i][j] += dp[i - 1][j + 1];
                if (dp[i][j] >= MOD) dp[i][j] -= MOD;
            }
        } else {
            int j = x[i];
            dp[i][j] = dp[i - 1][j];

            dp[i][j] += dp[i - 1][j - 1];
            if (dp[i][j] >= MOD) dp[i][j] -= MOD;

            dp[i][j] += dp[i - 1][j + 1];
            if (dp[i][j] >= MOD) dp[i][j] -= MOD;
        }
    }

    ull arrays = 0;
    for (int j = 1; j <= m; j++) {
        arrays += dp[n][j];
        if (arrays >= MOD) arrays -= MOD;
    }

    cout << arrays;

    return 0;
}