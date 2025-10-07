class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = (int)numbers.size() - 1;
        while (i < j) {
            long long sum = (long long)numbers[i] + numbers[j];
            if (sum == target) {
                // +1 because the problem wants 1-indexed positions
                return {i + 1, j + 1};
            } else if (sum > target) {
                --j;            // need a smaller sum
            } else {
                ++i;            // need a bigger sum
            }
        }
        return {-1, -1}; // not reached (guaranteed one solution)
    }
};
