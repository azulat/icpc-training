#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    
    if (s == t) {
        cout << "Hola de nuevo, " << s << "!";
    } else {
        cout << "Hola, " << s << " y " << t << "!";
    }

    return 0;
}