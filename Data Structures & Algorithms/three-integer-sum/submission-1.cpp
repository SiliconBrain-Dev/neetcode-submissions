class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){

        vector<vector<int>>arr;

        // fix one number and find other two using pointers

        // lets first sort 

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){

            // if smallest is positive then cannot acheive 0 sum
            if(nums[i]>0){
                break;
            }

            // handle duplicates

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int leftpointer=i+1;
            int rightpointer=nums.size()-1;

            while(leftpointer<rightpointer){

                int sum=nums[i]+nums[leftpointer]+nums[rightpointer];

                if(sum==0){
                    arr.push_back({nums[i],nums[leftpointer],nums[rightpointer]});

                    // skip duplicates
                    while(leftpointer < rightpointer && nums[leftpointer] == nums[leftpointer + 1]) {
                        leftpointer++;
                    }

                    while(leftpointer < rightpointer && nums[rightpointer] == nums[rightpointer - 1]) {
                        rightpointer--;
                    }

                    leftpointer++;
                    rightpointer--;
                }else if(sum<0){
                    leftpointer++;
                }else{
                    rightpointer--;
                }



            }
        }

        return arr;
    }
};
