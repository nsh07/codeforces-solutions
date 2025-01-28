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
        };
    }
    out.push_back(std::stoi(curr));
    return out;
}

std::vector<std::string> splitStr(std::string in) {
    std::vector<std::string> out;
    std::string curr = "";

    for (auto i:in) {
        if (i != ' ') curr += i;
        else {
            out.push_back(curr);
            curr = "";
        };
    }
    out.push_back(curr);
    return out;
}

int main() {
    int t, n, m, l, r, max;
    std::cin >> t;
    std::string curr = "";
    std::vector<int> arr;
    std::vector<std::vector<std::string>> opts;
    std::vector<int> outCurr;
    std::vector<std::vector<int>> out;

    while (t--) {
        std::cin >> n >> m;
        std::cin.ignore();
        std::getline(std::cin, curr);
        arr = splitStrToInt(curr);
        m--;

        while (m--) {
            std::getline(std::cin, curr);
            opts.push_back(splitStr(curr));
        }

        for (auto i:opts) {
            l = std::stoi(i[1]);
            r = std::stoi(i[2]);
            
            if (i[0] == "+") {
                for (int i=l; l <= arr[i] && arr[i] <= r; i++) {
                    arr[i] += 1;
                }
            }
            else {
                for (int i=l; l <= arr[i] && arr[i] <= r; i++) {
                    arr[i] -= 1;
                }
            }

            max = arr[0];
            outCurr = {};
            for (auto i:arr) {
                if (i > max) max = i;
            }
            outCurr.push_back(max);
        }
        out.push_back(outCurr);
    }

    for (auto i:out) {
        for (auto j:i) {
            std:: cout << j << " ";
        }
        std::cout << std::endl;
    }
}