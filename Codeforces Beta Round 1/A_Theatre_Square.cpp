#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n, m, a;
    cin >> n >> m >> a;

    ull x = (n + a - 1) / a;
    ull y = (m + a - 1) / a;

    cout << x * y;

    return 0;
}