class Solution {

public:

    vector<int> bubbleSort(vector<int>& nums) {

        int n = nums.size();

        for(int c=0; c<n-1; c++) {

            for(int i=0; i<n-1; i++) {

                if (nums[i] > nums[i+1]) swap(nums[i], nums[i+1]);

            }

        }

        return nums;

    }

};