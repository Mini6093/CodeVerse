#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        for (char ch : s) {
            if (mapping.count(ch)) {
                // If it's a closing bracket
                if (st.empty() || st.top() != mapping[ch])
                    return false;
                st.pop();
            } else {
                // If it's an opening bracket
                st.push(ch);
            }
        }
        
        return st.empty();
    }
};
