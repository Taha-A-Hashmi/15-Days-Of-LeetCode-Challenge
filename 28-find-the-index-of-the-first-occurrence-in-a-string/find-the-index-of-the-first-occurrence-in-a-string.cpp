class Solution {
public:
    int strStr(string h, string n) {        
        for (int i = 0; i < h.size(); i++) {
            string s = h.substr(i, n.size());
            if (s == n) {
                return i;
            }
        }

        return -1;
    }
};