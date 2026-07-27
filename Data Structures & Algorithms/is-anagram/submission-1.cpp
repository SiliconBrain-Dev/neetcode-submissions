class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) {
            return false;
        }

        
        vector<int> hash_s(26, 0);
        vector<int> hash_t(26, 0);

        
        for(int i = 0; i < s.size(); i++) {
            hash_s[s[i] - 'a'] += 1;
        }

        
        for(int j = 0; j < t.size(); j++) {
            hash_t[t[j] - 'a'] += 1;
        }

        
        for(int k = 0; k < 26; k++) {
            if (hash_s[k] != hash_t[k]) {
                return false;
            }
        }

        return true;
    }
};