#include<vector>
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            if(nums.size()==0 || nums.size()==1){
                return true;
            }
            return helper(nums, 1);


		}
        private:
        bool helper(const vector<int>& nums, int i){
            if(i>=nums.size()) return true;
            if(nums[i-1]>nums[i])  return false;
            return helper (nums, i+1);
        }
};