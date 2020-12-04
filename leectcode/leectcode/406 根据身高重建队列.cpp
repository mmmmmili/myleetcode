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
//    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//        int size = people.size();
//        vector<vector<int>> ans;
//        auto compare = [&](vector<int>& a1, vector<int>& a2) {
//            if (a1[0] > a2[0])return true;
//            else if (a1[0] < a2[0])return false;
//            return a1[1] < a2[1];
//        };
//        sort(people.begin(), people.end(), compare);
//        for (auto person:people) {
//            ans.insert(ans.begin() + person[1], person);
//        }
//        return ans;
//
//       
//
//    }
//   /* 执行用时：320 ms, 在所有 C++ 提交中击败了53.80 % 的用户
//        内存消耗：12.1 MB, 在所有 C++ 提交中击败了39.90 % 的用户*/
//};
//int main() {
//    Solution b;
//
//}