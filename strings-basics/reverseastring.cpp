class Solution{	
	public:		
		void reverseString(vector<char>& s){
			//your code goes here
            reverseStringHelper(s, 0, s.size()-1);

		}
        private:
        void reverseStringHelper(vector<char>& s, int left, int right){
            if(left>=right) return;
            swap(s[left], s[right]);
            reverseStringHelper(s, left+1, right-1 );
        }
};