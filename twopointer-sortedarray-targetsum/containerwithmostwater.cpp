class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; 
        int j=height.size()-1;
        long long best=0;
        while(i<j){
            int h=min(heeight[i], height[j]);
            long long area=(j-1)*h;
            if(area>best) best=area;
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return best;
        
    }
};