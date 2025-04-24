class Solution {
    public:
        string removeKdigits(string num, int k) {
            string result;
            for (char c : num) {
                while (!result.empty() && k > 0 && result.back() > c) {
                    result.pop_back();
                    k--;
                }
                result.push_back(c);
            }
            while (k-- > 0 && !result.empty()) result.pop_back();
            int idx = 0;
            while (idx < result.size() && result[idx] == '0') idx++;
            result = result.substr(idx);
            return result.empty() ? "0" : result;
        }
    };
    