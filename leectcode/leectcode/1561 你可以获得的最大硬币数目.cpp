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
//    int maxCoins(vector<int>& piles) {
//        sort(piles.begin(), piles.end(),greater<>());
//        int n = piles.size() / 3*2;
//        int sum = 0;
//        for (int i = 1; i < n; i=i+2) {
//            sum += piles[i];
//        }
//        return sum;
//    }
//    /*执行用时：536 ms, 在所有 C++ 提交中击败了6.78 % 的用户
//        内存消耗：52.7 MB, 在所有 C++ 提交中击败了9.60 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a({ 2,4,1,2,7,8
//        });
//    b.maxCoins(a);
//}