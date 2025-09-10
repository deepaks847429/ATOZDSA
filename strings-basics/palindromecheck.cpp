class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int left=0;
            int right=s.size()-1;
            while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                left++;
                right--;
            }
            return true;
		}
};