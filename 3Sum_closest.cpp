#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (abs(target - sum) < abs(target - closestSum)) {
                    closestSum = sum;
                }

                if (sum > target) {
                    k--;
                }
                else if (sum < target) {
                    j++;
                }
                else {
                    return sum; // Exact match found
                }
            }
        }

        return closestSum;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    int result = obj.threeSumClosest(nums, target);

    cout << "Closest sum = " << result << endl;

    return 0;
}