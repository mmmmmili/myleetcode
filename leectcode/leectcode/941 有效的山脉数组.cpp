//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    bool validMountainArray(vector<int>& A) {
//        bool isUp = true;
//        int size = A.size();
//        if (size < 3)return false;
//        if (A[0] > A[1])return false;
//        for (int i = 0; i < size - 1; i++) {
//            if (A[i] == A[i + 1]) {
//                return false;
//            }
//            else if (isUp && A[i] > A[i + 1]) {
//                isUp = false;
//            }
//            else if (!isUp && A[i] < A[i + 1]) {
//                return false;
//            }
//
//        }
//        return isUp == false;
//    }
//};
////执行用时：56 ms, 在所有 C++ 提交中击败了90.92 % 的用户
////内存消耗：21.2 MB, 在所有 C++ 提交中击败了5.27 % 的用户
//
//
//int main() {
//    Solution b;
//
//}