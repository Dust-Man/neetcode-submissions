/*
[-1,0,1,2,-1,-4]
[-4,-1,-1,0,1,2]

La solución brute force no pasa el último test case, pero se puede
optimizar evitando repetir números en A. Sin embargo hay otro approach.
Selecciones un número A y lugo resuelves Two Sum con el arreglo ordenado
usando two pinters. 
La lógica estaba correcta, el único inconveniente era el como estabamos modificando l y r, estos se modifican según las necesidades de la suma y no solo decrecen y crecen al mismo ritmo
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> sol;
        for(int i = 0; i < n; i++){
            int l = i +1, r = n -1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    sol.insert({nums[i],nums[l],nums[r]});
                    l++; r--;
                }
                else if(sum > 0){
                    r--;
                } else{
                    l++;
                }
            }
        }
        return vector<vector<int>> (sol.begin(), sol.end());
    }
};
