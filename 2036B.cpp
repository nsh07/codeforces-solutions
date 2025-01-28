//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, b, c;
        cin >> n >> k;
        unordered_map<int, long long> m;

        for (int i = 0; i < k; i++) {
            cin >> b >> c;
            
            if (m.find(b) != m.end()) m[b] += c;
            else m[b] = c;
        }

        vector<long long> costs;

        for (auto &i:m) {
            costs.push_back(i.second);
        }
        sort(costs.begin(), costs.end(), greater<long long>());
        int nBrands = costs.size();

        long long out = 0;
        for (int i = 0; i < min(n, nBrands); i++) {
            out += costs[i];
        }
        cout << out << '\n';
    }
}