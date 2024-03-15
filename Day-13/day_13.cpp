class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
       int countZero=0;
       int withOutZero=1;
       for(int &num:nums){
        if(num==0){
            //update the zero
        countZero++;
        }else if(num!=0){
            //multiply by all non zero value
          withOutZero*=num;
        }
        }

         vector<int>ans(n);
        for(int i=0;i<n;i++){
             int num=nums[i];
            if(num!=0){
                if(countZero>0){
                    ans[i]=0;
                }else{
                      ans[i]=withOutZero/nums[i];
                }
              
            }else if(num==0){
                if(countZero>1){
                    ans[i]=0;
                }else{
                      ans[i]=withOutZero;
                }
            }
        }
 return ans;
       
    }
};