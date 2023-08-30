#include <iostream>
#include <string>

bool isBinarySequence(const std::string& str) {
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a sequence of characters: ";
    std::cin >> str;

    if (isBinarySequence(str)) {
        std::cout << "Output: 1" << std::endl;
    } else {
        std::cout << "Output: 0" << std::endl;
    }

    return 0;
}
