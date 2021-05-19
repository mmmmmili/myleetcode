//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//int compare(int a, int b) {
//    return a > b;
//}
//class Solution {
//public:
//    int kthLargestValue(vector<vector<int>> matrix, int k) {
//        /*int m = matrix.size(), n = matrix[0].size();
//        vector<vector<int>> ans(matrix.size(), vector<int>(matrix[0].size(),0));
//        vector<int> temp;
//        for (int j = 1; j < n; j++) {
//            ans[0][j] = ans[0][j - 1] ^ matrix[0][j];
//            temp.push_back(ans[0][j]);
//        }
//        for (int i = 1; i < m; i++) {
//            ans[i][0] = ans[(i - 1) ][0]^ matrix[i - 1][0];
//            temp.push_back(ans[i][0]);
//        }
//        for (int i = 1; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                ans[i][j] = ans[i - 1][j - 1] ^ ans[i - 1][j] ^ ans[i][j - 1] ^ matrix[i][j];
//                temp.push_back(ans[i][j]);
//            }
//        }
//        sort(temp.begin(), temp.end(), compare);
//        return temp[k - 1];*/
//
//
//
//
//        /*int m = matrix.size(), n = matrix[0].size();
//        vector<int> ans(m*n,0);
//        ans[0] = matrix[0][0];
//        for (int j = 1; j < n; j++) {
//            ans[j] = ans[j - 1] ^ matrix[0][j];
//        }
//        for (int i = 1; i < m; i++) {
//            ans[i*n] = ans[(i-1)*n] ^ matrix[i-1][0];
//        }
//        for (int i = 1; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                ans[i*n+j] = ans[(i - 1)*n+j - 1] ^ ans[(i - 1)*n+j] ^ ans[i*n+j - 1] ^ matrix[i][j];
//            }
//        }
//        sort(ans.begin(), ans.end(), compare);
//        return ans[k-1];*/
//       //自己写怎么都是错
//
//
//        int m = matrix.size(), n = matrix[0].size();
//        vector<vector<int>> ans(m+1, vector<int>(n+1,0));
//        vector<int> temp;       
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                ans[i][j] = ans[i - 1][j - 1] ^ ans[i - 1][j] ^ ans[i][j - 1] ^ matrix[i-1][j-1];
//                temp.push_back(ans[i][j]);
//            }
//        }
//        sort(temp.begin(), temp.end(), compare);
//        return temp[k - 1];
//      /*  执行用时：1156 ms, 在所有 C++ 提交中击败了5.02 % 的用户
//            内存消耗：135.8 MB, 在所有 C++ 提交中击败了5.02 % 的用户*/
//    }
//};
//
//
//int main() {
//    Solution b;
//    
//
//        /*vector<vector<int>> a = { {10,9,5},{2,0,4},{1,0,9}, {3,4,8} };
//    b.kthLargestValue(a,10);*/
//    vector<vector<int>> a = { {5,2},{1,6} };
//    b.kthLargestValue(a, 1);
//    return 0;
//}