#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    string s1 = "";
    string s2 = "";

    // Nối các phần tử của word1
    for (int i = 0; i < word1.size(); i++) {
        s1 = s1 + word1[i];
    }

    // Nối các phần tử của word2
    for (int i = 0; i < word2.size(); i++) {
        s2 = s2 + word2[i];
    }

    // So sánh
    if (s1 == s2)
        cout << "true";
    else
        cout << "false";

    return 0;
}