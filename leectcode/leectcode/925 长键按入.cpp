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
//    
//    bool isLongPressedName(string name, string typed) {
//        int i = 0, j = 0;
//        int max1 = name.size(), max2 = typed.size();
//        while (i < max1 && j < max2) {
//            if (name[i] == typed[j]) {
//                i++;
//                j++;
//            }
//            else if (j >= 1 && typed[j - 1] == typed[j]) {
//                j++;
//
//            }
//            else {
//                return false;
//            }
//        }
//        if (i != max1)return false;
//        while (j < max2) {
//            if (typed[j - 1] != typed[j])return false;
//            j++;
//        }
//        return true;
//    }
//   /* 执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：6.5 MB, 在所有 C++ 提交中击败了7.95 % 的用户*/
//
//};
//int main() {
//    Solution b;
//    b.isLongPressedName("alex", "aaleex");
//}