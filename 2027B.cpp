//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        int ans = 0, temp=0;
        for (int i=0; i<n; i++) {
            temp = 0;
            for (int j=i; j<n; j++) {
                if (v[j] <= v[i]) temp ++;
            }
            ans = max(ans, temp);
        }
        cout << n - ans<< '\n';
    }
  return 0;
}
