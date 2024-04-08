class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int len=students.size();
        queue<int>que;
        stack<int>sta;

        for(int i=0;i<len;i++){
            que.push(students[i]);
            sta.push(sandwiches[len-i-1]);
        }
      int notIntarestStudent=0;
        while(!que.empty() && notIntarestStudent<que.size()){
            if(que.front()==sta.top()){
                que.pop();
                sta.pop();
                notIntarestStudent=0;
            }else{
                que.push(que.front());
                que.pop();
                notIntarestStudent++;

            }
        }
        return que.size();
    }
};