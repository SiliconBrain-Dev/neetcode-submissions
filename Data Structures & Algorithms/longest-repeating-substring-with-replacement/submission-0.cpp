class Solution {
public:
    int characterReplacement(string s, int k) {

        int right_ptr=0;
        int left_ptr=0;
        int max_length=0;
        int max_freq=0;
        int current_window=0;

        vector<int>hash(26,0);

        while(right_ptr<s.size()){

            // to get max freq
            hash[s[right_ptr]-'A']++;

            max_freq=max(max_freq,hash[s[right_ptr]-'A']);



            current_window=right_ptr-left_ptr+1;



            if((current_window-max_freq)>k){

                hash[s[left_ptr]-'A']--;
                left_ptr++;

            }

            current_window=right_ptr-left_ptr+1;
            max_length=max(max_length,current_window);
            
            right_ptr++;

        }

        return max_length;

    }
};
