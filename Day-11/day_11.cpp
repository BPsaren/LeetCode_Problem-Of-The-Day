class Solution {
public:


    int pivotInteger(int n) {
       for(int pivot=1;pivot<=n;pivot++){
        int leftSum=0;
        int rightSum=0;

        for(int j=1;j<=pivot;j++){
            leftSum+=j;
        }

        for(int j=pivot;j<=n;j++){
            rightSum+=j;
        }
        if(leftSum==rightSum)
        return pivot;

       }
       return -1;
    }
};