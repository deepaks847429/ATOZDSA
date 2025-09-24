class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        for(int i=0; i<k ; i++){
            int element = nums[0];
            nums.erase(nums.begin());
            nums.push_back(element);
        }

    }
};