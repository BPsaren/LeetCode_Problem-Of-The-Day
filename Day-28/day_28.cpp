class Solution {
public:
     int slidingWindow(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        int n = nums.size();
        int i = 0; 
        int j = 0;
      
        int count = 0;
        
        while(j < n) {
            
            mapp[nums[j]]++;
            
            while(mapp.size() > k) {
                //shrink the window
                mapp[nums[i]]--;
                if(mapp[nums[i]] == 0) {
                    mapp.erase(nums[i]);
                }
                i++;
            }
            
            count += (j-i+1); //ending at j
            j++;
        }
        
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindow(nums, k) - slidingWindow(nums, k-1);
    }
};