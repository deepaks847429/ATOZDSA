class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if (nums.size() < 2) return -1; // second largest possible hi nahi hai

        int max1 = INT_MIN;
        int second_max = INT_MIN;

        for (int num : nums) {
            if (num > max1) {
                second_max = max1;
                max1 = num;
            } 
            else if (num > second_max && num != max1) {
                second_max = num;
            }
        }

        return (second_max == INT_MIN) ? -1 : second_max;
    }
};
