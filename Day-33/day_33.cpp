class Solution {
public:
    int maxDepth(string s) {
        //first approach
     /*   int result=0;
  //      int maxDepth=0;
        stack<char>stt;
         for(char ch:s){
            if(ch=='('){
                stt.push(ch);
            }else if(ch==')'){
              stt.pop();
            }
            result=max(result,(int)stt.size());
         }
        return result;*/
//second approach
        int result=0;
        int parenthesis=0;
       
        stack<char>stt;
         for(char ch:s){
            if(ch=='('){
                parenthesis++;
            }else if(ch==')'){
              parenthesis--;
            }
            result=max(result,parenthesis);
         }
        return result;
    }
};