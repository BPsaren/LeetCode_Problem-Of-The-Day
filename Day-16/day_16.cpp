class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         if (points.empty()) return 0;
        
        // Sort intervals based on their end points
        std::sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        
        int arrows = 1; // Initial count of arrows
        int end = points[0][1]; // End point of the first interval
        
        for (int i = 1; i < points.size(); ++i) {
            // If the current interval overlaps with the previous one, continue
            if (points[i][0] <= end) {
                continue;
            }
            // If there's no overlap, increment arrow count and update end point
            arrows++;
            end = points[i][1];
        }
        
        return arrows;
    }
};