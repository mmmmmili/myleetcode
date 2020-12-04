//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//class Solution {
//public:
//    int totalNQueens(int n) {
//        int num = 0;
//        vector<int> col;
//        vector<int> diaglose1(2 * n - 1, 0);//row-col 取模2n-1
//        vector<int> diaglose2(2 * n - 1, 0);//row+col
//        back(num, 0, n, col, diaglose1, diaglose2);
//        return num;
//    }
//   
//    void back(int& num, int row, int n, vector<int>& col, vector<int>& diaglose1, vector<int>& diaglose2) {
//        if (row == n) {
//            num++;
//        }
//        for (int i = 0; i < n; i++) {
//            if (find(col.begin(), col.end(), i) == col.end() && diaglose1[row - i + n - 1] == 0 && diaglose2[row + i]== 0) {
//                col.push_back(i);
//                diaglose1[row - i + n - 1] = 1;
//                diaglose2[row + i] = 1;
//                back(num, row + 1, n, col, diaglose1, diaglose2);
//                col.pop_back();
//                diaglose1[row - i + n - 1] =0;
//                diaglose2[row + i] = 0;
//            }
//        }
//    }
//   /* 执行用时：12 ms, 在所有 C++ 提交中击败了28.33 % 的用户
//        内存消耗：6.3 MB, 在所有 C++ 提交中击败了28.66 % 的用户*/
//};
//int main() {
//    Solution b;
//    b.solveNQueens(4);
//}