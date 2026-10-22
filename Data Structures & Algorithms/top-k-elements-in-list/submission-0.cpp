class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        for(int i = 0; i < nums.size(); i++){
            freqs[nums[i]]++;
        }
        int masFreq = 0;

        vector<pair<int, int>> freqPairs(freqs.begin(), freqs.end());
        sort(freqPairs.begin(), freqPairs.end(),[](const auto& a, const auto& b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(auto freq: freqPairs){
            if(k == 0) break;
            ans.push_back(freq.first);
            k--;
        }
        return ans;
    }
};
