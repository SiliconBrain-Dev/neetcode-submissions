class Solution {
public:
    int maxArea(vector<int>& heights) {

        // here we need to find height and length to get area
        
        int left_ptr=0;
        int right_ptr=heights.size()-1;

        int max_area=0;

        while(left_ptr<right_ptr){

           int second_max=min(heights[left_ptr],heights[right_ptr]);

            int currentmax=(right_ptr-left_ptr)*second_max;

            max_area=max(currentmax,max_area);

            if (heights[left_ptr] < heights[right_ptr]) {
                left_ptr++;
            } else {
                right_ptr--;
            } 
        




        }

        return max_area;

        
        
    }
};
