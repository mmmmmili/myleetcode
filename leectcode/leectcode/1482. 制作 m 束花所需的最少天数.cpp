//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int minDays(vector<int>& bloomDay, int m, int k) {
//        if (bloomDay.size() < m * k)return -1;
//        int low = INT_MAX, high = INT_MIN, mid = 0;
//        for (int item : bloomDay) {
//            if (item < low)low = item;
//            if (item > high)high = item;
//        }
//        while (low < high) {
//            mid = (low + high) / 2;
//            if (hasMxK(bloomDay, m, k, mid)) {
//                high = mid;
//            }
//            else {
//                low = mid + 1;
//            }
//        }
//        return low;
//
//
//    }
//    //��m*k�����ֵΪans�Ĳ��ص�������
//    bool hasMxK(vector<int>& bloomDay, int m, int k, int ans) {
//        int nums = 0, flower = 0;
//        for (auto item : bloomDay) {
//            if (item <= ans) {
//                flower++;
//            }
//            else {
//                flower = 0;
//            }
//            if (flower == k) {
//                flower = 0;
//                nums++;
//            }
//        }
//        return nums >= m;
//    }
//    /*ִ����ʱ��164 ms, ������ C++ �ύ�л�����86.50 % ���û�
//        �ڴ����ģ�61.7 MB, ������ C++ �ύ�л�����84.66 % ���û�*/
//};
//
//
//int main() {
//    Solution b;
//
//}