class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       int freArr[101];
       int max_freq=0;
       int sum_freq=0;

       for(int num:nums){
            freArr[num]++;
            int currFreq= freArr[num];
            if(currFreq > max_freq)
            {
                max_freq=currFreq;
                sum_freq=currFreq;
            }else if(currFreq==max_freq){
            sum_freq+=currFreq;
            }
       }
       return sum_freq;
    }
};