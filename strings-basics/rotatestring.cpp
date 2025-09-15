class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
            if(s.size()!=goal.size()) return false;
            return (s+s).find(goal)!=string::npos;

		}
};