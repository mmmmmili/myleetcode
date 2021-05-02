//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int leastBricks(vector<vector<int>> wall) {
//        int width = 0,size=wall.size();
//        for (int item : wall[0]) {
//            width += item;
//        }
//        unordered_map<int,int> hash;
//        for (int i = 0;i < size;i++) {
//            width = 0;
//            for (int item : wall[i]) {
//                width += item;
//                --hash[width];
//            }
//        }
//        int min_num = INT_MAX;
//        hash[width] = 0;
//        for (auto item :hash) {
//            min_num = min(min_num, size+item.second);
//        }
//       
//        return min_num;
//    }
//  /*  执行用时：84 ms, 在所有 C++ 提交中击败了6.29 % 的用户
//        内存消耗：23.9 MB, 在所有 C++ 提交中击败了5.06 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//    vector < vector<int >> a= { {1}, { 1 }, { 1 }};
//    b.leastBricks(a);
//    return 0;
//}