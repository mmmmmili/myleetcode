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
//    int findMinArrowShots(vector<vector<int>>& points) {
//        sort(points.begin(), points.end(), [&](vector<int>& a1, vector<int>& a2) {return a1[0] < a2[0]; });
//        int size = points.size(),cnt=1;
//        if (size == 0)return 0;
//        int left = points[0][0], right = points[0][1];
//        for (int i = 1; i < size; i++) {
//            left = points[i][0];
//                right = min(points[i][1], right);
//                if (left > right) {
//                    left = points[i][0];
//                    right = points[i][0];
//                    cnt++;
//                }
//        }
//        return cnt;
//    }
//  /*  执行用时：352 ms, 在所有 C++ 提交中击败了49.67 % 的用户
//        内存消耗：34.3 MB, 在所有 C++ 提交中击败了50.63 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    vector<vector<int>> a = { {10,16},{2,8},{1,6},{7,12} };
//    b.findMinArrowShots(a);
//}