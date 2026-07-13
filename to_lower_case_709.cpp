#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};

int main() {
    Solution obj;
    string s = "Hello";
    cout << obj.toLowerCase(s);
    return 0;
}