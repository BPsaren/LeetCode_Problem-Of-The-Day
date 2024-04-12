
class Solution {
public:
    vector<int>leftSideMax(vector<int>&height,int& n){
        vector<int> left_max(n);

        left_max[0] = height[0];

        for (int i = 1; i < n; i++) {  // Start loop from index 1
            left_max[i] = max(left_max[i - 1], height[i]);  // Update left_max[i] with max of previous and current height
        }
        return left_max;
    }

    vector<int> rightSideMax(vector<int>& height, int& n) {
        vector<int> right_max(n);
        right_max[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {  // End loop at index n-2
            right_max[i] = max(right_max[i + 1], height[i]);  // Update right_max[i] with max of next and current height
        }
        return right_max;
    }

    int trap(vector<int>& height) {
        int result = 0;
        int n = height.size();
        vector<int> left_max = leftSideMax(height, n);
        vector<int> right_max = rightSideMax(height, n);

        for (int i = 0; i < n; i++) {
            int h = min(left_max[i], right_max[i]) - height[i];
            result += max(h, 0);  // Add only positive values
        }
        return result;
    }

    
};