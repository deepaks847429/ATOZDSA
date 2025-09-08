class Solution{	
	
    private:
    int recursum(vector<int>&nums, int index=0){
        if(index==nums.size()) return 0;
        return nums[index]+recursum(nums, ++index);
    }
    public:
		int arraySum(vector<int>& nums){
			//your code goes here
            if(nums.empty()) return 0;
            return recursum(nums);
		}
};