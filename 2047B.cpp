//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> counts;

        for (auto c : s) {
            counts[c]++;
        }

        int min_c = counts.begin()->second;
        int max_c = (counts.size() > 1 ? (++counts.begin())->second
                                       : counts.begin()->second);
        char min_char = counts.begin()->first;
        char max_char = (counts.size() > 1 ? (++counts.begin())->first
                                           : counts.begin()->first);

        for (auto c : counts) {
            if (c.second > max_c) {
                max_c = c.second;
                max_char = c.first;
            }
            if (c.second < min_c) {
                min_c = c.second;
                min_char = c.first;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == min_char) {
                s[i] = max_char;
                break;
            }
        }

        cout << s << '\n';
    }
}