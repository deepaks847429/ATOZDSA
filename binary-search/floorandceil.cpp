class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int low=0;
        int floor=-1;
        int ceil=-1;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                floor=nums[mid];
                ceil=nums[mid];
                break;
            }
            else if(nums[mid]<x){
                
                floor=nums[mid];
                low=mid+1;
            }
            else{
                ceil=nums[mid];
                high=mid-1;
            }


        }
        
        return {floor, ceil};
   
    }
};