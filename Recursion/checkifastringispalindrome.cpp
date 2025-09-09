class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int n= s.size();
            if(n<=1) return true;
            if(s[0]==s[n-1]){
                string sub= s.substr(1, n-2);
                return palindromeCheck(sub);
            }
            else{
                return false;
            }
		}
};