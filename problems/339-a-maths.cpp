#include <bits/stdc++.h>

int main() {
    std::string in;
    std::vector<int> inVec;
    int s;
    std::cin >> in;

    for (auto i:in) {
        if (i != '+') inVec.push_back(i - '0');
    }
    s = inVec.size();

    std::sort(inVec.begin(), inVec.end());
    
    std::cout << inVec[0];
    for (int i = 1; i < s; i++) {
        std::cout << "+" << inVec[i];
    }
    std::cout << std::endl;
}