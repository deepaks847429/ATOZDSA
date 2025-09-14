class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            sort(str.begin(), str.end());
            string first=str.front();
            string last=str.back();
            int n= min(first.size(), last.size());
            int i=0;
            while(i<n && first[i]==last[i]){
                i++;
            }
            return first.substr(0, i);
		}
};