class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left_ptr=0;
        int right_ptr=0;

        int ls=0;
        int current_size=0;
        unordered_set<char>hash;
        while(right_ptr<s.size()){

            
            
            if(hash.find(s[right_ptr]) == hash.end()){
                hash.insert(s[right_ptr]);
                current_size=right_ptr-left_ptr+1;
                ls=max(ls,current_size);
                right_ptr++;

                
            }else{
                
                hash.erase(s[left_ptr]);
                left_ptr++;
                

            }
            
            
        }
        
        return ls;
    }
};
