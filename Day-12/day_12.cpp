class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int currSum=0;
        int result=0;
        unordered_map<int,int>mapp;
      mapp[0]=1;
        for(int &num:nums){
            currSum+=num;

            int remainingSum=currSum-goal;
            if(mapp.find(remainingSum)!=mapp.end()){
                result+=mapp[remainingSum];
            }
            mapp[currSum]++;
        }
        return result;
    }
};