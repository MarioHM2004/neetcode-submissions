class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> reps{};

        for (auto i : nums) {
            if (reps.insert(i).second)
                continue;
            else
                return true;
        }
        return false;
    }
};