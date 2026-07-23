#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]); // duplicate number
                nums.erase(nums.begin() + i);
                break;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != i + 1) {
                ans.push_back(i + 1); // missing number
                break;
            }
        }

        if (ans.size() == 1) {
            ans.push_back(n);
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.findErrorNums(nums);

    cout << "Duplicate Number: " << result[0] << endl;
    cout << "Missing Number: " << result[1] << endl;

    return 0;
} 