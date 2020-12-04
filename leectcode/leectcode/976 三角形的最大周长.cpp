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
//    int largestPerimeter(vector<int>& A) {
//        sort(A.begin(), A.end());
//        int size = A.size(),sum=0;
//        
//        for (int i = size - 1; i > 1; i--) {
//            if (A[i - 1] + A[i - 2] > A[i])
//                return A[i - 1] + A[i - 2] + A[i];
//        }
//       
//        return 0;
//
//    }
//  /*  执行用时：164 ms, 在所有 C++ 提交中击败了5.92 % 的用户
//        内存消耗：20.5 MB, 在所有 C++ 提交中击败了38.68 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = { 3,6,2,3 };
//    b.largestPerimeter(a);
//}