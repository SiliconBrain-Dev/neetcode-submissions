class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {


        int n=nums.size();

        unordered_map<long long,int> hash;

        bool result=false;

        for(int i=0;i<n;i++){
            hash[nums[i]]+=1;

            if(hash[nums[i]]>1){
                result=true;
            }
        }

        return result;
        
    }
};