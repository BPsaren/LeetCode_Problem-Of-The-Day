class Solution {
public:
    int findDuplicate(vector<int>& nums) {
  //      map<int,int>mapp;
    unordered_map<int, int> mapp;

        for (int num : nums) {
            mapp[num]++;
            if (mapp[num] > 1) {
                return num;
            }
        }
        
        return -1;
        
        
    }
};