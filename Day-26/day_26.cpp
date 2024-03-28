class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mapp;
        int i=0;
        int j=0;
        int result=0;
        while(j<n){
         mapp[nums[j]]++;
          while(i<j && mapp[nums[j]]>k){
           mapp[nums[i]]--;
              i++;
          }
            result= max(result,j-i+1);
            j++;
        }
        return result;
    }
};