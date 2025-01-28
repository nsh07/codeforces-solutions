//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

#define lli long long

using namespace std;

bool greaterEqualX(lli aSum, lli x, lli val) { return aSum - val >= x; }

bool lessEqualY(lli aSum, lli y, lli val) { return aSum - val <= y; }

int main() {
    int t;
    cin >> t;

    while (t--) {
        lli n, x, y, aSum = 0, out = 0;
        cin >> n >> x >> y;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            aSum += a[i];
        }
        sort(a.begin(), a.end());

        int l = 0, r = n - 1, mid, greaterXi = -1, lessYi = -1;
        while (r - l > 1) {
            mid = (l + r) / 2;
            if (greaterEqualX(aSum, x, a[mid]))
                l = mid;
            else
                r = mid - 1;
        }
        if (greaterEqualX(aSum, x, a[r]))
            greaterXi = r;
        else if (greaterEqualX(aSum, x, a[l]))
            greaterXi = l;
        else {
            cout << 0;
            continue;
        }

        l = 0;
        r = n - 1;
        while (r - l > 1) {
            mid = (l + r) / 2;
            if (lessEqualY(aSum, y, a[mid]))
                r = mid;
            else
                l = mid + 1;
        }
        if (lessEqualY(aSum, y, a[l]))
            lessYi = l;
        else if (lessEqualY(aSum, y, a[r]))
            lessYi = r;
        else {
            cout << 0;
            continue;
        }

        lli res;
        for (int i = min(greaterXi, lessYi); i < max(greaterXi, lessYi); i++) {
            for (int j = i + 1; j < max(greaterXi, lessYi); j++) {
                res = aSum - a[i] - a[j];
                if (x <= res && res <= y) out++;
            }
        }

        cout << out << '\n';
    }
}