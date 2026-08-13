class Solution {

private:
         int bsp(vector<int>arr,int l,int r){
            if(arr[l]<=arr[r]){
                return arr[l];
            }

            int mid=l+(r-l)/2;

            if(arr[mid]>arr[r]){
                return bsp(arr,mid+1,r);
            }else {
                    return bsp(arr,l,mid);
            }      
            
    }
public:
        int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;

        return bsp(nums,l,r);   
        
    }
};
