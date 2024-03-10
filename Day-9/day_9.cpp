class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       // Sort both arrays to use two-pointer technique
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        vector<int> result;

        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                // To avoid duplicates in the result
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++; j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};