class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        stack<int> stt;
        unordered_set<int> remove_idx;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                stt.push(i);
            } else if (s[i] == ')') {
                if (stt.empty()) {
                    remove_idx.insert(i);
                } else {
                    stt.pop();
                }
            }
        }

        while (!stt.empty()) {
            remove_idx.insert(stt.top());
            stt.pop();
        }

        string ans = "";

        for (int i = 0; i < n; i++) {
            if (remove_idx.find(i) == remove_idx.end()) {
                ans.push_back(s[i]);
            }
        }

        return ans;
   }
};