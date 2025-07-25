// LeetCode: https://leetcode.com/problems/two-sum/
// Language: C++
// Time: O(n), Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int compliment = target - nums[i];
            if (seen.count(compliment)) {
                return {seen[compliment], i}; // return both indices as soon as found
            }
            seen[nums[i]] = i;
        }
        return {}; // return empty vector if no solution found
    }
};


// Approach:
// - Store visited elements and their indices
// - Check if target - current element exists
