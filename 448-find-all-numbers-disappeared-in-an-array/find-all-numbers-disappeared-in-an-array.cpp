class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> ans;
        int n = nums.size();

        //Populating the set with all the values from 1 to n O(n)
        for (int i = 1; i <= nums.size(); i++) {
            ans.insert(i);
        }

        // Removing the values that exist in the array from the set O(n)
        for (int i = 0; i < nums.size(); i++) {
            if (ans.find(nums[i]) != ans.end()) { // These lookups are all 0(1) because the use of hashtable
                ans.erase(nums[i]);
            }
        }

        // Populating and returning an array with the remaining set values O(n)
        vector<int> ans2;
        for (int x : ans) {
            ans2.push_back(x);
        }

        return ans2;

        //Overall time complexity: O(n)
    }
};