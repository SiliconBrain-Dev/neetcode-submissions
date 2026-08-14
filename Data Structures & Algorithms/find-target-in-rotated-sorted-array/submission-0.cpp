class Solution {
private:
    int bsp(const vector<int>& arr, int l, int r, int t) {
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (arr[mid] == t) {
                return mid;
            } else if (arr[l] <= arr[mid]) {
                if (arr[l] <= t && t < arr[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (arr[mid] < t && t <= arr[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            } 
        }
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        return bsp(nums, l, r, target);   
    }
};