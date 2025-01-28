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
        vector<int> switches(2*n);
        int min = 0, max = 0;
 
        for (int i = 0; i < 2*n; i++) {
            cin >> switches[i];
        }
        // Min loop
        int addedOne = 0;
        for (auto &i:switches) {
            if (i) {
                if (min) {
                    min--;
                }
                else min++;
 
                if (addedOne >= n) {
                    max--;
                }
                else {
                    max++;
                    addedOne++;
                }
            }
        }
 
        cout << min << ' ' << max << '\n';
    }
}