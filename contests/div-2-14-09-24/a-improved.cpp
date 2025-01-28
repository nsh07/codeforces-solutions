//
// Created by nishant on 15/9/24.
//

#include <bits/stdc++.h>

int main() {
    int t, n;
    const std::string vowels = "aeiou";
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        int rem = n % 5;
        std::string out;

        for (const auto vowel : vowels) {
            if (rem > 0) {
                std::cout << vowel;
                rem--;
            }
            for (int i = 0; i < n / 5; i++) {
                std::cout << vowel;
            }
        }

        std::cout << out << std::endl;
    }
}
