#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;

    vector<string> contests;
    contests.reserve(4);
    contests.push_back("ICPC Regional");

    if (y == 2019 || y > 2021) {
        contests.push_back("ICPC Qual");
    }

    if (y == 2026) {
        contests.push_back("School Qual");
        contests.push_back("School Regional");
    }

    cout << contests.size() << "\n";

    for (const string& s : contests) {
        cout << s << "\n";
    }

    return 0;
}