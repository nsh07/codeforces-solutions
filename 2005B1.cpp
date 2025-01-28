//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        int m, q;
        
        cin >> n >> m >> q;

        pair<long long, long long> teacherPos;
        long long davidPos;
        
        cin >> teacherPos.first >> teacherPos.second;
        cin >> davidPos;

        if (teacherPos.first < davidPos && teacherPos.second < davidPos)
            cout << n - max(teacherPos.first, teacherPos.second) << '\n';
        else if (teacherPos.first > davidPos && teacherPos.second > davidPos)
            cout << min(teacherPos.first, teacherPos.second) - 1 << '\n';
        else
            cout << abs(teacherPos.first - teacherPos.second) / 2 << '\n';
    }
}