class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
       /* for(auto it:tickets){
            q.push(it);
        }*/
       /* int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int step=0;
         while(!q.empty()){
            step++;
            int front=q.front();
            q.pop();

           tickets[front]--;
            if(tickets[front]==0 && k==front){
                return step;
            }
              if(tickets[front]!=0){
                q.push(front);
              }
         }

         return step;*/


         int n=tickets.size();
         int step=0;
        if(tickets[k]==1){
        return k+1;
        }
        while(tickets[k]>0){

         for(int i=0;i<n;i++){
            if(tickets[i]!=0){
                 tickets[i]--;
               step++;
               }
                if (tickets[k]==0){
                 return step;
                       }
    }

  
   }

  return step;
    }
};