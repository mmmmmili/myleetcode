//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    int minTime(vector<int>& time, int m) {
//        float sum = 0;
//        for (auto a : time) {
//            sum += a;
//        }
//        int left = 0, right = sum, mid = (left + right) / 2;
//
//        while (left != right) {
//            if (isOK(time, m, mid)) {
//                right = mid;
//                mid = (left + right) / 2;
//            }
//            else {
//                left = mid + 1;/////////////////�������һ���Ƚ���Ҫ
//                mid = (left + right) / 2;
//            }
//        }
//        return mid;
//    }
//
//    bool isOK(vector<int>& nums, int m, int sumNumber) {
//        int  cnt = 0, sum = 0,maxItem=0;
//        //i����ţ�j���±�
//        for (int j=0; j < nums.size(); j++) {
//            sum += nums[j];
//            maxItem = max(maxItem, nums[j]);
//            if (sum - maxItem> sumNumber) {
//                sum = nums[j];
//                maxItem = nums[j];
//                cnt++;
//            }
//        }
//        if (cnt < m)return true;
//        return false;
//    }
//    /*ִ����ʱ��164 ms, ������ C++ �ύ�л�����90.58 % ���û�
//        �ڴ����ģ�28.5 MB, ������ C++ �ύ�л�����25.40 % ���û�*/
//};
//int main() {
//
//}