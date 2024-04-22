class Solution {
public:
     void travelLevel(queue<string>&que,string &curr,unordered_set<string>&uSett){
        for(int i=0;i<4;i++){
            char ch=curr[i];
        char incre=ch=='9'?'0':ch+1;
        char dec=ch=='0'?'9':ch-1;

        curr[i]=incre;
        if(uSett.find(curr)==uSett.end()){
            uSett.insert(curr);
            que.push(curr);
        }

        curr[i]=dec;
        if(uSett.find(curr)==uSett.end()){
            uSett.insert(curr);
            que.push(curr);
        }
          curr[i]=ch;


        }
     }
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>uSett(deadends.begin(),deadends.end());

        string start="0000";
     if(uSett.find(start)!=uSett.end()){
    return -1;
     }
        queue<string>que;
        que.push(start);
        int level=0;
        while(!que.empty()){
            int n=que.size();// elemenst of current lavel
            while(n--){
                string curr=que.front();
                que.pop();
                if(curr==target){
                    return level;
                }
              travelLevel(que,curr,uSett);
            }
            level++;
        }
        return -1;
    }
};