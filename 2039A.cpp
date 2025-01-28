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
        vector<long long int> mods;
        long long curr = 2;

        for (int i = 1; i <= n; i++) {
            cout << curr << ' ';
            mods.push_back(curr % i);

            while (true) {
                auto mod = find(mods.begin(), mods.end(), curr % (i + 1));
                if (mod == mods.end())
                    break;
                else
                    curr++;
            }
        }
        cout << '\n';
    }
}