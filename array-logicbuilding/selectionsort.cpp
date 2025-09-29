class Solution {

public:

vector<int> selectionSort(vector<int>& nums) {

int n = nums.size();

for(int i=0; i<n-1; i++){

for(int j=i; j<n; j++){

if(nums[j]<nums[i]){

int extra=nums[i];

nums[i]=nums[j];

nums[j]=extra;

}

}

}

return nums;

}

};