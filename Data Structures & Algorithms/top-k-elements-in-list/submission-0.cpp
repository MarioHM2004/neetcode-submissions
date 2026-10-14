class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> reps;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        for (auto n : nums) {
            reps[n]++;
        }

        for (auto const &pair : reps) {
            buckets[pair.second].push_back(pair.first);
        }

        for (int i = static_cast<int>(buckets.size())-1; i >= 0; i--) {
            for (int j = 0; j < static_cast<int>(buckets[i].size()); j++) {
                result.push_back(buckets[i][j]);

                if (result.size() == k) 
                    return result;
            }
        }
        return result;
    }
};
