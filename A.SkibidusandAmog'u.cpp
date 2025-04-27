#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        // If the last two characters are "us", replace them with "i"
        if (s.size() >= 2 && s[s.size() - 2] == 'u' && s[s.size() - 1] == 's') {
            s[s.size() - 2] = 'i'; // Replace 'u' with 'i'
            s.pop_back(); // Remove 's'
        }

        cout << s << endl;
    }

    return 0;
}
