/*334. Increasing Triplet Subsequence
Given an integer array nums, return true if there exists a triple of indices (i, j, k)
such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int primeiro = INT_MAX;
        int segundo = INT_MAX;
        
        for (int n : nums) {
            if (n <= primeiro) {
                primeiro = n;
            } else if (n <= segundo) {
                segundo = n;
            } else {
                return true;
            }
        }
        
        return false;
    }
};