class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string z = "";
        for (int i = 0; i < strs.size() - 1; i++) {
            string x = strs[i];
            string y = strs[i+1];
            
            int Ssize = (x.size() > y.size()) ?  y.size() : x.size();

            for (int j = 0; j < Ssize; j++) {
                if (x[j] == y[j]) {
                    z += x[j];
                } else {
                    break;
                }
            }

            strs[i+1] = z;
            z = "";
        }
        return strs[strs.size() - 1];
    }
};