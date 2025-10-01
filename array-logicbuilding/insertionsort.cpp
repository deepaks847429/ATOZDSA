class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
         int n = nums.size();

        for ( int i=1 ; i<n ; i++ ) {

            int j = i-1;

            int curr = nums[i];

            while ( j>=0 && curr < nums[j] ) {

                nums[j+1] = nums[j];

                j--;

            }

            nums[j+1] = curr;

        }

        return nums;

    }
};
