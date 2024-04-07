class Solution {
public:
   int t[101][101];
    bool solve(int idx, int open, string& s, int n) {
        if(idx == n) {
            return open == 0;
        }
        
        if(t[idx][open] != -1) {
            return t[idx][open] == 1 ? true : false;
        }
        
        bool isValid = false;
        
        if(s[idx] == '*') {
            if(open > 0)
                isValid |= solve(idx+1, open-1, s, n); //Treating * as )
            
            isValid |= solve(idx+1, open+1, s, n); //Treating * as (
            
            isValid |= solve(idx+1, open, s, n);   //Treating * as ''
        } else if(s[idx] == '(') {
            isValid |= solve(idx+1, open+1, s, n);
        } else if(open > 0) {
            isValid |= solve(idx+1, open-1, s, n);
        }
        
        return t[idx][open] = isValid;
    }


   
       /* stack<int> openParenthesis;
        stack<int> star;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                openParenthesis.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else { // s[i] == ')'
                if (!openParenthesis.empty()) {
                    openParenthesis.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;
                }
            }
        }

        while (!openParenthesis.empty()) {
            if (star.empty()) {
                return false;
            }

            if (openParenthesis.top() < star.top()) {
                openParenthesis.pop();
                star.pop();
            } else {
                return false;
            }
        }

        return true;*/
            
           bool checkValidString(string s) {
        int n = s.length();
        memset(t, -1, sizeof(t));
        return solve(0, 0, s, n);
        
    }
};