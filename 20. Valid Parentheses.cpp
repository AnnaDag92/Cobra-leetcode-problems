#include <iostream>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s[0] == ']' || s[0] == '}' || s[0] == ')') return false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if (s[i] == ')' && (!st.empty()) && st.top() == '(') st.pop();
            else if (s[i] == '}' && (!st.empty()) && st.top() == '{') st.pop();
            else if (s[i] == ']' && (!st.empty()) && st.top() == '[') st.pop();
            else return false;
        }
        if (st.empty())return true;
        return false;
    }
};


int main()
{

}