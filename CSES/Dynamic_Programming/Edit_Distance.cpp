#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length(), m = s2.length();

    s1 = '\0' + s1;
    s2 = '\0' + s2;
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));
    dp[0][0] = 0;

    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            dp[i][j] = s1[i - 1] == s2[j - 1] ? (
                min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]})
            ) : (
                1 + min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]})
            );
        }
    }

    cout << dp[n][m];

    return 0;
}