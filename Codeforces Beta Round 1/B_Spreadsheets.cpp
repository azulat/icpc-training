#include <bits/stdc++.h>

using namespace std;

char num_to_char(int n) { return (char)(n + 64); }
string num_to_letters(int n) {
    string s;
    while (n > 0) {
        n--;
        s += (char)('A' + (n % 26));
        n /= 26;
    }

    reverse(s.begin(), s.end());
    return s;
}

int char_to_num(char l) { return ((int)l - 64); }
int letters_to_num(string s) {
    int n = 0, i = 1;
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        n += char_to_num(*it) * i;
        i *= 26;
    }

    return n;
}

regex a1(R"(^([A-Z]+)(\d+)$)");
regex rxcy(R"(^R(\d+)C(\d+)$)");

void solve_tc() {
    string s;
    cin >> s;

    smatch groups;

    if (regex_match(s, groups, rxcy)) {
        int x = stoi(groups[1].str());
        int y = stoi(groups[2].str());

        cout << num_to_letters(y) << x << "\n";
    } else if (regex_match(s, groups, a1)) {
        string l = groups[1].str();
        int n = stoi(groups[2].str());

        cout << 'R' << n << 'C' << letters_to_num(l) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        solve_tc();        
    }

    return 0;
}