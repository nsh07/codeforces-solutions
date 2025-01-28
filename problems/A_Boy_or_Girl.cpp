//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    int alphabets[26] = {0};
    cin >> name;

    for (auto letter:name) {
        alphabets[letter - 97]++;
    }

    int countDistinct = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabets[i] > 0) countDistinct++;
    }

    cout << (countDistinct % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}