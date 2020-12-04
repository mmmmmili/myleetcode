//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
// 
//
//class Solution {
//public:
//    bool backspaceCompare(string S, string T) {
//        char stack[2][200] = { 0 };
//        int top = -1,size=S.size();
//        for (int i = 0; i < size; i++) {
//            char temp = S[i];
//            if (temp == '#') {
//                if(top>=0)--top;
//            }
//            else {
//                stack[0][++top] = temp;
//            }
//           
//        }
//        int top2 = -1;
//        size = T.size();
//        for (int i = 0; i < size; i++) {
//            char temp = T[i];
//            if (temp == '#') {
//                if(top2>=0)--top2;
//            }
//            else {
//                stack[1][++top2] = temp;
//            }
//        }
//        if (top != top2)return false;
//        for (int i = 0; i <= top; i++) {
//            if (stack[0][i] != stack[1][i])return false;
//       }
//        return true;
//
//    }
//   /* 执行用时：4 ms, 在所有 C++ 提交中击败了51.03 % 的用户
//        内存消耗：6.4 MB, 在所有 C++ 提交中击败了38.54 % 的用户*/
//    
//};
//int main() {
//    Solution b;
//    b.backspaceCompare2("bxj##tw",
//"bxo#j##tw"
//);
//}