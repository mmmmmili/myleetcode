//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//    bool judgeSquareSum1(int c) {
//        set<int> a;
//        for (int i = 0;i < sqrt(c);i++) {
//            a.insert(i * i);
//        }
//        for (auto item : a) {
//            if (a.find(c - item) != a.end())
//                return true;
//        }
//        return false;
//
//    }
// /*   执行用时：460 ms, 在所有 C++ 提交中击败了5.36 % 的用户
//        内存消耗：68.9 MB, 在所有 C++ 提交中击败了5.17 % 的用户*/
//    bool judgeSquareSum(int c) {
//        int k = (int)floor(sqrt(c));
//        double temp;
//        for (int i = 0;i <= k;i++) {
//            temp = sqrt(c - i * i);
//            if (temp-floor(temp) == 0)
//                return true;
//           
//        }
//       
//        return false;
//
//    }
//    /*执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：5.8 MB, 在所有 C++ 提交中击败了41.05 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//    b.judgeSquareSum(3);
//}