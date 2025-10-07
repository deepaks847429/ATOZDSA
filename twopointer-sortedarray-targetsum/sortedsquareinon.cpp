vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    int left = 0, right = n - 1, k = n - 1;

    while (left <= right) {
        int L = nums[left] * nums[left];   // left ka square
        int R = nums[right] * nums[right]; // right ka square

        if (L > R) {            // bada square kaun?
            ans[k] = L;         // peeche place karo
            left++;             // left use ho gaya
        } else {
            ans[k] = R;
            right--;            // right use ho gaya
        }
        k--;                    // agla slot peeche ka
    }
    return ans;
}
