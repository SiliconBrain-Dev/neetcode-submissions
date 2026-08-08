#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) {
            return 0;
        }
        
        unordered_set<int> numset(nums.begin(), nums.end());

        int lcs=0;

        for(int num:numset){
            // first element
            if(numset.find(num-1)==numset.end()){
                int currentlen=1;
                int currentnum=num;

                // now check for the sequence

                while(numset.find(currentnum+1)!=numset.end()){
                    currentlen++;
                    currentnum++;
                }

                lcs=max(lcs,currentlen);


            }


        }

        return lcs;

    }
};