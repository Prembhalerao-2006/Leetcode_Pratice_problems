#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    if (ans.empty() || ans.back() != nums1[i]) {
                        ans.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    vector<int> result = obj.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
