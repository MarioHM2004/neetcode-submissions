class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const auto &word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(word);
        }
        vector<vector<string>> arr;

        for (auto &pair : groups)
            arr.push_back(pair.second);

        return arr;
    }
};