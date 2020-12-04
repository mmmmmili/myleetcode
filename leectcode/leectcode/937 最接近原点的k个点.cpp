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
//    vector<vector<int>> kClosest1(vector<vector<int>>& points, int K) {
//        sort(points.begin(), points.end(), [&](const vector<int>& a1, const vector<int>& a2) {
//            return pow(a1[0], 2) + pow(a1[1], 2) < pow(a2[0], 2) + pow(a2[1], 2);
//            });
//            return vector<vector<int>>(points.begin(), points.begin() + K);
//    }/*执行用时：568 ms, 在所有 C++ 提交中击败了27.17 % 的用户
//        内存消耗：38.6 MB, 在所有 C++ 提交中击败了73.94 % 的用户*/
//    vector<vector<int>> kClosest2(vector<vector<int>>& points, int K) {
//        make_heap(points.begin(), points.end(),[&](const vector<int>& a1, const vector<int>& a2) {
//            return pow(a1[0], 2) + pow(a1[1], 2) > pow(a2[0], 2) + pow(a2[1], 2);
//            });
//        /*sort(points.begin(), points.end(), [&](const vector<int>& a1, const vector<int>& a2) {
//            return pow(a1[0], 2) + pow(a1[1], 2) < pow(a2[0], 2) + pow(a2[1], 2);
//            });*/
//        sort_heap(points.begin(), points.end(), [&](const vector<int>& a1, const vector<int>& a2) {
//            return pow(a1[0], 2) + pow(a1[1], 2) > pow(a2[0], 2) + pow(a2[1], 2);
//            });
//        return vector<vector<int>>(points.begin(), points.begin() + K);
//    }
//   /* 执行用时：980 ms, 在所有 C++ 提交中击败了9.93 % 的用户
//        内存消耗：38.8 MB, 在所有 C++ 提交中击败了73.64 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    std::vector<double> numbers{ 2.5, 10.0, 3.5, 6.5, 8.0, 12.0, 1.5, 6.0 };
//    std::make_heap(std::begin(numbers), std::end(numbers), std::less<>());// {1.5 6 2.5 6.5 8 12 3.5 10}
//    std::sort_heap(std::begin(numbers), std::end(numbers), std::less<>());//{12 10 8 6.5 6 3.5 2.5 1.5}
//}