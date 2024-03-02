class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // Square the elements
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }

        // Sort the squared values
        sort(nums.begin(), nums.end());

        return nums;
    }
};