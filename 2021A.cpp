//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, av, curr = 0;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<long long> arr;

        for (int i = 0; i < n; i++) {
            cin >> curr;
            arr.push_back(curr);
        }

        sort(arr.begin(), arr.end(), greater<>());

        while (arr.size() > 1) {
            int s = arr.size();
            int av = (arr[s - 1] + arr[s - 2]) / 2;

            arr.erase(arr.end());
            arr.erase(arr.end());

            arr.push_back(av);
        }

        cout << arr[0] << endl;
    }
}