class Solution {
public:
    bool isPalindrome(string s) {

        int rightpointer=s.size()-1;
        int leftpointer=0;

        while(leftpointer<rightpointer){

            if(!isalnum(s[leftpointer])){
                leftpointer++;
            }

            else if(!isalnum(s[rightpointer])){
                rightpointer--;
            }

            else{

                if(toupper(s[leftpointer]) != toupper(s[rightpointer])) {
                    return false;
                }

                rightpointer--;
                leftpointer++;        
                    
                }

            }
    
        return true;
        
    }
};
