class Solution{	
	public:
		vector<char> frequencySort(string& s){
			//your code goes here
            unordered_map<char, int> freq;
            for( char c: s) freq[c]++;

            vector<char> chars;
            for(auto &p:freq) chars.push_back(p.first);
            sort(chars.begin(), chars.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) return a < b; // tie → alphabet
            return freq[a] > freq[b];             // higher frequency first
        });

        return chars;
            
		}
};