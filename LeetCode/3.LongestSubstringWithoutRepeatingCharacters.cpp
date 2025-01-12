#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> v;       
    int startIdx = 0;       
    int maxLen = 0;        

    for (int i = 0; i < s.size(); i++) {
        bool isDuplicate = false;

  
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == s[i]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
          
            v.push_back(s[i]);
        } else {
          
            maxLen = max(maxLen, (int)v.size());

            v.clear();
            startIdx++;
            i = startIdx - 1; 
        }
    }

    maxLen = max(maxLen, (int)v.size());

    cout <<  maxLen << endl;

    return 0;
}
