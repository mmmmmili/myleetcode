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
//   /* ִ����ʱ��4 ms, ������ C++ �ύ�л�����51.03 % ���û�
//        �ڴ����ģ�6.4 MB, ������ C++ �ύ�л�����38.54 % ���û�*/
//    
//};
//int main() {
//    Solution b;
//    b.backspaceCompare2("bxj##tw",
//"bxo#j##tw"
//);
//}