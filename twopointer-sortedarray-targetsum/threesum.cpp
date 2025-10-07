#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());              // 1) sort

        int n = (int)nums.size();
        for (int i = 0; i < n; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;   // skip same 'i' to avoid dup triplets

            int target = -nums[i];
            int l = i + 1, r = n - 1;

            while (l < r) {                          // 2) two-pointer on the right subarray
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    res.push_back({nums[i], nums[l], nums[r]});

                    // move both pointers and SKIP duplicates
                    int leftVal = nums[l], rightVal = nums[r];
                    while (l < r && nums[l] == leftVal) ++l;
                    while (l < r && nums[r] == rightVal) --r;
                } else if (sum < target) {
                    ++l;                              // need bigger sum
                } else {
                    --r;                              // need smaller sum
                }
            }
        }
        return res;
    }
};
