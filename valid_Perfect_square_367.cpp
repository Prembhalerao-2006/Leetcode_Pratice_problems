#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }

        for (long long i = 0; i <= num / 2; i++) {
            if (i * i == num) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution obj;

    int num;
    cin >> num;

    if (obj.isPerfectSquare(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}