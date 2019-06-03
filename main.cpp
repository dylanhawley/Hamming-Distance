#include <iostream>

int HammingDistance(const char *a, const char *b, int n);
int HammingDistance(std::string a, std::string b);

int main() {
    std::string a, b;
    std::cout << "Enter string a:" << std::endl;
    std::cin >> a;
    std::cout << "Enter string b:" << std::endl;
    std::cin >> b;
    std::cout << "Hamming distance: " << HammingDistance(a, b) << std::endl;
    return 0;
}

int HammingDistance(const char *a, const char *b, int n) {
    int distance = 0;
    for(int i = 0; i < n; i++)
        distance += (a[i] ^ b[i]) > 0 ? 1 : 0;
    return distance;
}

int HammingDistance(std::string a, std::string b) {
    return HammingDistance(a.c_str(), b.c_str(), a.size());
}