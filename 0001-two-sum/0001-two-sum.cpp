class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Mp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (Mp.count(complement)) {
                return {Mp[complement], i};
            }
            Mp[nums[i]] = i;
        }

        return {}; // No solution found
    }
};