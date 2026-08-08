class Solution {
public:
    string minWindow(string s, string t) {

        
        unordered_map<char,int>target_hash;

        for(int i=0;i<t.size();i++){
            target_hash[t[i]]++;
        }

        unordered_map<char,int>window_hash;



        int right_ptr=0;
        int left_ptr=0;
        int need=target_hash.size();
        int have=0;
        int min_size = s.size() + 1;// start with impossible size
        int start_index=0;




        while(right_ptr<s.size()){

            char right_char = s[right_ptr];
            window_hash[right_char]++;

            if(target_hash.count(right_char) && window_hash[right_char] == target_hash[right_char]) {
                have++;
            }

            while(have == need) {

                int current_size = right_ptr - left_ptr + 1;

                if(current_size < min_size) {
                    min_size = current_size;
                    start_index = left_ptr; 
                }

                // drop
                char left_char = s[left_ptr];
                window_hash[left_char]--;

                if(target_hash.count(left_char) && window_hash[left_char] < target_hash[left_char]) {
                    have--; 
                }

                left_ptr++;
    
        }

        right_ptr++;

       
    }

     if(min_size > s.size()) {
            return "";
        }

        return s.substr(start_index, min_size);
        

    }
};
