//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T1, typename T2>
void inputVector(T1 n, vector<T2> &a) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    inputVector(n, a);

    // equal to or greater than the k-th place finisher's score
    int qualified = 0;
    for (auto ai : a) {
        if (ai >= a[k - 1] && ai > 0) {
            qualified++;
        }
    }

    cout << qualified << '\n';
}
