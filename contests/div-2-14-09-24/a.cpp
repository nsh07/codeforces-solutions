//
// Created by nishant on 14/9/24.
//

#include <bits/stdc++.h>

int main() {
    int t, n;
    const std::string vowels = "aeiou";
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        int count[5] = {0};
        while (n--) {
            int minInd = 0;
            for (int i = 0; i < 5; i++) {
                if (count[i] < count[minInd]) minInd = i;
            }
            std::cout << vowels[minInd];
            count[minInd]++;
        }
        std::cout << std::endl;
    }
}
