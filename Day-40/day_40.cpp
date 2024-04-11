class Solution {
public:
    string removeKdigits(string num, int k) {
          string result = "";

        int n = num.length();
        for (int i = 0; i < n; i++) {
            while (result.length() > 0 && result.back() > num[i] && k > 0) {
                result.pop_back();
                k--;
            }
            //secodn case
            // Skip leading zeros
            if (result.length() > 0 || num[i] != '0') {
                result.push_back(num[i]);
            }
        }
      //example 12356 just increase order
        // Handle cases where k is not exhausted yet
        while (k > 0 && result.length() > 0) {
            result.pop_back();
            k--;
        }

        // If result is empty, return "0"
        if (result == "") {
            return "0";
        }

        return result;
    }
};