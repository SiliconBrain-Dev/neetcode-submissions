class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();

        unordered_map<long long,int> hashmap;

        

        

        for(int j=0;j<n;j++){
            if(hashmap.count(target-nums[j])){
             
             // found the other then return the index pair
             return {hashmap[target-nums[j]],j};
            }
            // add if not found
            hashmap[nums[j]]=j;
        }

        
        
    }
};
