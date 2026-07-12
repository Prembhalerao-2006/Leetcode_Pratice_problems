#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long temp = x;
        long long res = 0;

        while (x != 0) {
            int lastD = x % 10;
            res = res * 10 + lastD;
            x /= 10;
        }

        return res == temp;
    }
};

int main() {
    Solution obj;

    int x;
    cin >> x;

    if (obj.isPalindrome(x)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}