
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low = 0, high = nums.size() - 1;
        int ans = nums.size(); 

        while (low <= high) {
            int mid = (low + high) / 2; 

            /* Check if mid element 
               is a potential answer */
            if (nums[mid] >= x) {
                ans = mid; 

                // Search left half
                high = mid - 1; 
            } 
            else {
                // Search right half
                low = mid + 1; 
            }
        }
        return ans; 
    }
        
    
};