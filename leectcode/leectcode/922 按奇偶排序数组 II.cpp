//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> sortArrayByParityII(vector<int>& A) {
//        vector<int> a0, a1;
//        for (int i = 0; i < A.size(); i++) {
//            if (i % 2 == 0 && A[i] % 2 == 1) {
//                a0.push_back(i);
//            }
//            else if (i % 2 == 1 && A[i] % 2 == 0) {
//                a1.push_back(i);
//            }
//        }
//        for (int i = 0; i < a0.size(); i++) {
//            swap(A[a0[i]], A[a1[i]]);
//        }
//        return A;
//    }/*执行用时：40 ms, 在所有 C++ 提交中击败了91.77 % 的用户
//        内存消耗：21.3 MB, 在所有 C++ 提交中击败了15.37 % 的用户*/
//    
//};
//
//
//int main() {
//    Solution b;
//
//}