class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        for (auto iter = nums.begin() + 1; iter != nums.end(); ++iter) {
            if (*iter != *it) {
                ++it;
                *it = *iter;
            }
        }
        
        return std::distance(nums.begin(), it) + 1;
    }
};