class Solution{
    private:
    int findFirst(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;

    }
    int findlast(vector<int> & nums, int target){
        int low=0;
        int high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;

            }
             else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return last;

    }
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int first= findFirst(nums, target);
        int last= findlast(nums, target);
        return {first, last};
        
    }
};