#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int start = 0;

        if (s[0] == '-') {
            start = 1;
        }

        for (int i = start; i < s.size(); i++) {
            if (!isdigit(s[i])) {
                return false;
            }
        }

        return true;
    }

    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for (int i = 0; i < operations.size(); i++) {
            if (isNumber(operations[i])) {
                int val = stoi(operations[i]);
                ans.push_back(val);
            }
            else if (operations[i] == "C") {
                ans.pop_back();
            }
            else if (operations[i] == "D") {
                int lastEle = ans.back();
                int nextVal = lastEle * 2;
                ans.push_back(nextVal);
            }
            else if (operations[i] == "+") {
                int last = ans.back();
                int secondLast = ans[ans.size() - 2];

                ans.push_back(last + secondLast);
            }
        }

        int totalSum = 0;

        for (int ele : ans) {
            totalSum += ele;
        }

        return totalSum;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    vector<string> operations(n);

    cout << "Enter operations:\n";
    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    cout << "Total Score = " << obj.calPoints(operations) << endl;

    return 0;
}