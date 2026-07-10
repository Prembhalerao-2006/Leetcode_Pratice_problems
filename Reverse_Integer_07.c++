#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long res = 0;

        while (x != 0) {
            int lastD = x % 10;
            res = res * 10 + lastD;
            x = x / 10;
        }

        if (res > INT_MAX || res < INT_MIN) {
            return 0;
        }

        return (int)res;
    }
};

int main() {
    Solution obj;

    int x;
    cout << "Enter an integer: ";
    cin >> x;

    cout << "Reversed Integer: " << obj.reverse(x) << endl;

    return 0;
}