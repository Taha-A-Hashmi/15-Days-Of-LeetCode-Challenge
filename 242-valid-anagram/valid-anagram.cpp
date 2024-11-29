class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_multiset<char> set;

        for (int i = 0; i < s.size(); i++) {
            set.insert(s[i]);
        }

        

        for (int i = 0; i < t.size(); i++) {
            if (set.find(t[i]) == set.end()) {
                return false;
            } else{
                auto it = set.find(t[i]);
                set.erase(it);
            }
        }

        return true;
    }
};