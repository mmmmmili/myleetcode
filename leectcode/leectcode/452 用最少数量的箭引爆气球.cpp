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
//  /*  ִ����ʱ��352 ms, ������ C++ �ύ�л�����49.67 % ���û�
//        �ڴ����ģ�34.3 MB, ������ C++ �ύ�л�����50.63 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    vector<vector<int>> a = { {10,16},{2,8},{1,6},{7,12} };
//    b.findMinArrowShots(a);
//}