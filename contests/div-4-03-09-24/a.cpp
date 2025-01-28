#include <bits/stdc++.h>

int main() {
    int t, a, b, c, min, curr;
    std::vector<int> out;

    std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        c = a;
        min = (c - a) + (b - c);

        for (; c <= b; c++) {
            curr = (c - a) + (b - c);
            if (curr < min) min = curr;
        }

        out.push_back(min);
    }

    for (auto i:out) {
        std::cout << i << std::endl;
    }
}