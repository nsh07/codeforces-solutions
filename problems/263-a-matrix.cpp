#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> splitStrToInt(std::string in) {
    std::vector<int> out;
    std::string curr = "";
    for (auto i:in) {
        if (i != ' ') curr += i;
        else {
            out.push_back(std::stoi(curr));
            curr = "";
        }
    }
    out.push_back(std::stoi(curr));
    return out;
}

int main() {
    std::vector<std::vector<int>> matrix;
    std::string curr;
    int iters = 5;
    while (iters--) {
        std::getline(std::cin, curr);
        matrix.push_back(splitStrToInt(curr));
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j]) {
                std::cout << std::abs(i - 2) + std::abs(j - 2) << std::endl;
                return 0;
            }
        }
    }
}