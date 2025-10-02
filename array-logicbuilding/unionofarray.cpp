class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i=0;
        int j=0;
        int n=nums1.size(), m =nums2.size();
        while(i<n && j<m){
            if(i>0 && nums1[i]==nums1[i-1]){i++; continue;}
            if(j>0 && nums2[j]==nums2[j-1]){j++; continue;}
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }
             else if (nums1[i] < nums2[j]) {
                res.push_back(nums1[i]);
                i++;
            } else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n) {
            if (i == 0 || nums1[i] != nums1[i-1]) res.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            if (j == 0 || nums2[j] != nums2[j-1]) res.push_back(nums2[j]);
            j++;
        }

        // res may have duplicates at the join boundary; dedupe once
        res.erase(std::unique(res.begin(), res.end()), res.end());
        return res;
        
    }
}