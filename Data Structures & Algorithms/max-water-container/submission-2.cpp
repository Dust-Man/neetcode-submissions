/*
Encontrar la altura máxima posible


*/
class Solution {
public:
    int maxArea(vector<int>& heights){
        int l = 0, r = heights.size() -1;
        int sol = 0;
        while(l < r){
            sol = max((min(heights[l], heights[r]) * (r-l)), sol);
            if(heights[l] < heights[r]){
                l++;
            } else{
                r--;
            }
        }
        return sol;
    }
};
