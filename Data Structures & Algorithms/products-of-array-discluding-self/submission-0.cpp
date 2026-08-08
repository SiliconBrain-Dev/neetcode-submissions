class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>arr(nums.size(),1);

    // left element products except that
        int leftproduct=1;
        for(int i=0;i<nums.size();i++){
            arr[i]*=leftproduct;
            leftproduct*=nums[i];
        }

        //right element products except that which becomes whole product except that
        int rightproduct=1;
        for(int j=nums.size()-1;j>=0;j--){
            arr[j]*=rightproduct;
            rightproduct*=nums[j];
        }


        return arr;


    }
};
