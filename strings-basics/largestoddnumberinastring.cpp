class Solution{	
public:		
    string largeOddNum(string& s){
        int r = -1;
        for (int i = (int)s.size() - 1; i >= 0; --i) {
            if ((s[i] - '0') % 2 == 1) { r = i; break; }
        }
        if (r == -1) return ""; // no odd digit

        string pref = s.substr(0, r + 1);                 // prefix till last odd
        size_t p = pref.find_first_not_of('0');            // trim leading zeros
        if (p == string::npos) return "";                  // all zeros (edge)
        return pref.substr(p);
    }
};
