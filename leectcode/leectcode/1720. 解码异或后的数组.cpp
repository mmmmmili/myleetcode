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
//    vector<int> decode(vector<int>& encoded, int first) {
//        int size = encoded.size();
//        vector<int> ans(size + 1, first);
//        for (int i = 0; i < size; i++) {
//            ans[i + 1] = ans[i] ^ encoded[i];
//        }
//        return ans;
//        /*执行用时：24 ms, 在所有 C++ 提交中击败了95.99 % 的用户
//            内存消耗：24.3 MB, 在所有 C++ 提交中击败了60.76 % 的用户*/
//    }
//};
//int main() {
//    Solution b;
//
//}