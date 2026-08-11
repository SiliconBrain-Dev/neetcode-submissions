class Solution {
public:
    bool isValid(string s) {

       unordered_map<char,char> hash = {{')','('}, {']','['}, {'}','{'}};

        

        if(s.size()%2!=0){
            return false;
        }

        // define stack
        char stack[s.size()];

        int ptr=-1;
        

        for(int i=0;i<s.size();i++){
            char current=s[i];

            // means closing bracket
            if(hash.count(current)){
                if(ptr==-1){
                    return false;
                }else if(stack[ptr]==hash[current]){
                    ptr--;

                }else{
                    return false;
                }
            }else{
                ptr++;
                stack[ptr]=current;
            }

        }

        return ptr == -1;   

        
    }
};
