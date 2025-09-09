class Solution{	
public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        vector<char>ans;
        reverseStringHelper(s, ans, 0);
        return ans;
	}

    void reverseStringHelper(vector<char>& s, vector<char>& ans, int i){
        if(i>= s.size()) return;
        reverseStringHelper(s, ans, i+1);
        ans.push_back(s[i]);
        
        
    }
};