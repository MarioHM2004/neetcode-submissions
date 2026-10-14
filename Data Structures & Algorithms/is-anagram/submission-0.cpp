class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map = {};

        for (auto i : s)
            map[i]++;

        for (auto j : t)
            map[j]--;

        for (auto const &pair: map) {
            if (s.size() != t.size())
                return false;
            if (pair.second != 0)
                return false;
        }
        return true;
    }
}; 
