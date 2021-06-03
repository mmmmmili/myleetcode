//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    string reverseParentheses(string s) {
//        int size = s.size();
//        stack<char> st;
//        string ans;
//        for (int i = 0; i < size; i++) {
//            if (s[i] == ')') {
//                while (st.top() != '(') {
//                    ans += st.top();
//                    st.pop();
//                }
//                st.pop();
//            }
//            else {
//                st.push(s[i]);
//            }
//        }
//        return ans;
//
//    }
//};
//
//int main() {
//    Solution b;
//    b.reverseParentheses("(u(love)i)");
//}