#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string line;
    cin >> line;

    cout << (("555" == line.substr(0, 3) ? "YES" : "NO"));

    return 0;
}