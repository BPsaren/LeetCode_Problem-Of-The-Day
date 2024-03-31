class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int n=nums.size();
        int minBound=-1;
        int maxBound=-1;
        int leftBound=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
            leftBound=i;
            }

            if(nums[i]==minK ){
               minBound=i;
            }
            if(nums[i]==maxK){
               maxBound=i;
            }

            int count=min(maxBound,minBound)-leftBound;
             ans+=(count<=0)? 0:count;
        }
        return ans;
    }
};