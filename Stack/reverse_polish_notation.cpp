// LeetCode: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
// Language: C++
// Time: O(n), Space: O(n)

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
          stack<int>st;
          for(string& token:tokens)
          {
            if(token=="+"||token=="-"||token=="*"||token=="/")
            {
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(token=="+")
                st.push(a+b);
                else if(token=="-")
                st.push(a-b);
                else if(token=="*")
                st.push(a*b);
                else
                st.push(a/b);
            }
            else
            {
                st.push(stoi(token));
            }
          }
          return st.top();
    }
};

//Approach:
//Use a stack to process the tokens. For operators, pop the top two values, apply the operation, and push the result.
