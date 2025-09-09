class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            vector<int> ans;
            reverseArrayhelper(nums,ans, 0);
            return ans;
            
		}
        private:
        void reverseArrayhelper(vector<int>& nums,vector<int>& ans, int index){
            if(index>=nums.size()) return;
            
            reverseArrayhelper(nums,ans, index+1);
            ans.push_back(nums[index]);
        }

};