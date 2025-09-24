class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int maxones=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count+=1;
                maxones=max(count, maxones);
            }
            else{
                count =0;
            }
        }
        return maxones;
        
    }
};