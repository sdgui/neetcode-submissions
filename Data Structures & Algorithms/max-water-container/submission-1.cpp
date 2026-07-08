class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j= heights.size()-1;
        int res=0; //i, j, water
        while (i < j){
            int water = (j-i) * min(heights[i],heights[j]);
            if (water>res){
                res=water;
            }
            if (heights[i]>heights[j]) j--;
            else i++;
        }
        return res;
    }
};
