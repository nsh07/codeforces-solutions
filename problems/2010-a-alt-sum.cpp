#include <iostream>
#include <vector>

int main() {
    int t, n, in, neg = 1, sum = 0;
    std::vector<int> inVec;
    std::vector<int> outVec;
    std::cin >> t;
    
    while (t--) {
        std::cin >> n;
        while (n--) {
            std::cin >> in;
            inVec.push_back(in);
        }
        
        for (auto i:inVec) {
            sum += neg * i;
            neg = -neg;
        }
        outVec.push_back(sum);

        sum = 0; neg = 1;
        inVec.clear();
    }

    for (auto i:outVec) {
        std::cout << i << std::endl;
    }
}