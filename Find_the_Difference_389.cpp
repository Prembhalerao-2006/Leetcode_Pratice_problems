#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }

        return t[t.size() - 1];
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    char result = obj.findTheDifference(s, t);

    cout << "Extra character is: " << result << endl;

    return 0;
}