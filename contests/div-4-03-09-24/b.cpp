#include <bits/stdc++.h>

int main() {
    int t, n;
    std::string currLine;
    std::vector<std::string> lines;
    std::vector<int> currOut;
    std::vector<std::vector<int>> out;

    std::cin >> t;
    while (t--) {
        std::cin >> n;
        currOut.clear();
        lines.clear();

        while (n--) {
            std::cin >> currLine;
            lines.push_back(currLine);
        }

        for (int i = lines.size() - 1; i >= 0; i--) {
            currOut.push_back(lines[i].find('#') + 1);
        }

        out.push_back(currOut);
    }

    for (auto i:out) {
        for (auto j:i) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }
}