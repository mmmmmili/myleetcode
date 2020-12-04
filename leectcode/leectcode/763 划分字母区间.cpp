//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//    vector<int> partitionLabels1(string S) {
//        //dp[i][j]是从i到j划分，dp[i][j] = 如果dp[i][j - 1]ok的话，看看j满不满足条件
//          //  如果不满足，
//        int size = S.size();
//        
//        vector<int> ans;
//
//        int first = 0, mark = 0;
//        while (mark<size) {
//            for (int i = first; i < size; i++)
//                if (S[i] == S[first])
//                    mark = i;
//            for (int i = first + 1; i < mark; i++) {
//                for (int j = mark; j < size; j++)
//                    if (S[j] == S[i])
//                        mark = j;
//            }
//            ans.push_back(mark - first + 1);
//            first = mark + 1;
//            mark += 1;
//        }
//        return ans;
//    }
//   /* 执行用时：36 ms, 在所有 C++ 提交中击败了8.87 % 的用户
//        内存消耗：6.8 MB, 在所有 C++ 提交中击败了38.73 % 的用户*/
//    vector<int> partitionLabels1(string S) {
//        int size = S.size();
//
//        vector<int> ans;
//
//        int last[26];
//
//        for (int i = 0; i < size; i++)
//            last[S[i] - 'a'] = i;
//
//        int start = 0, end = 0;
//        for (int i = 0; i < size; i++) {
//            end = max(last[S[i] - 'a'], end);
//            if (i == end) {
//                ans.push_back(end - start + 1);
//                start = end + 1;
//            }
//        }
//        
//        return ans;
//    }
//   /* 执行用时：8 ms, 在所有 C++ 提交中击败了73.45 % 的用户
//        内存消耗：6.6 MB, 在所有 C++ 提交中击败了71.53 % 的用户*/
//};
//int main() {
//    Solution b;
//    vector<int> ans=b.partitionLabels("defegdehijhklij");
//
//}