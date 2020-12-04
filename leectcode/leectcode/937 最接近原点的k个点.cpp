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
//    }/*ִ����ʱ��568 ms, ������ C++ �ύ�л�����27.17 % ���û�
//        �ڴ����ģ�38.6 MB, ������ C++ �ύ�л�����73.94 % ���û�*/
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
//   /* ִ����ʱ��980 ms, ������ C++ �ύ�л�����9.93 % ���û�
//        �ڴ����ģ�38.8 MB, ������ C++ �ύ�л�����73.64 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    std::vector<double> numbers{ 2.5, 10.0, 3.5, 6.5, 8.0, 12.0, 1.5, 6.0 };
//    std::make_heap(std::begin(numbers), std::end(numbers), std::less<>());// {1.5 6 2.5 6.5 8 12 3.5 10}
//    std::sort_heap(std::begin(numbers), std::end(numbers), std::less<>());//{12 10 8 6.5 6 3.5 2.5 1.5}
//}