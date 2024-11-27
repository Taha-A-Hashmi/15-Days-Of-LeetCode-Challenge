class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set;
        vector<vector<int>> result;
        int size = nums.size();
        sort(nums.begin(), nums.end()); // O(nlog(n))
        
        
        if (size < 3) {
            return result;
        }

        // Normal solution
        for (int i = 0; i < nums.size(); i++) {
            int f = i + 1;
            int l = nums.size() - 1;
            while (l > f) {
                int sum = nums[i] + nums[l] + nums[f];
                if (sum == 0) {
                    vector<int> vec = {nums[i], nums[l], nums[f]};
                    sort(vec.begin(), vec.end());
                    set.insert(vec);
                    l--;
                } else if (sum >= 0) {
                    l--;
                } else {
                    f++;
                }
            }

        }


        // Adding set elements to the vector
        for (auto vec : set) {
            result.push_back(vec);
        }
        

        return result;
    }
};