//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

string strXor(string& a, string& b) {
    string out;
    int a_s = a.size(), b_s = b.size(), currA, currB;
    if (a_s >= b_s) {
        for (int i = 0; i < a_s - b_s; i++) {
            out.push_back(a[i]);
        }
        for (int i = a_s - b_s; i < a_s; i++) {
            (a[i] == '1' ? currA = 1 : currA = 0);
            (b[i - a_s + b_s] == '1' ? currB = 1 : currB = 0);
            out.push_back((currA ^ currB == 1 ? '1' : '0'));
        }
    } else {
        for (int i = 0; i < b_s - a_s; i++) {
            out.push_back(b[i]);
        }
        for (int i = b_s - a_s; i < b_s; i++) {
            (b[i] == '1' ? currB = 1 : currB = 0);
            (a[i - b_s + a_s] == '1' ? currA = 1 : currA = 0);
            out.push_back((currA ^ currB == 1 ? '1' : '0'));
        }
    }

    return out;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, sub, curr, maxXor;
        cin >> s;
        int l1 = 1, r1 = s.size(), l2 = 1, r2 = 1;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                sub = s.substr(i, j - i);
                curr = strXor(s, sub);
                if (curr > maxXor) {
                    maxXor = curr;
                    l2 = i + 1;
                    r2 = j;
                }
            }
        }

        cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << '\n';
    }
}