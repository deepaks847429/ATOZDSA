class Solution {
public:
    bool isomorphicString(string s, string t) {
        if (s.length() != t.length()) {
            return false; // If the strings are not the same length, they cannot be isomorphic
        }

        unordered_map<char, char> mapS, mapT;  // Two hashmaps to track character mapping

        for (int i = 0; i < s.length(); i++) {
            // Check if the current character in `s` is already mapped to a character in `t`
            if (mapS.count(s[i]) && mapS[s[i]] != t[i]) {
                return false;  // If the mapping is inconsistent, return false
            }
            // Check if the current character in `t` is already mapped to a character in `s`
            if (mapT.count(t[i]) && mapT[t[i]] != s[i]) {
                return false;  // If the mapping is inconsistent, return false
            }

            // Create the mappings
            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];
        }

        return true;  // If no conflicts, the strings are isomorphic
    }
};
