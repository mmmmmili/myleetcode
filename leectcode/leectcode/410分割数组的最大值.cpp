//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include<math.h>
//using namespace std;
//class Solution {
//public:
//    int splitArray(vector<int>& nums, int m) {
//        float sum = 0, reduce_max = 0;
//        for (auto a : nums) {
//            if (reduce_max < a)reduce_max = a;
//            sum += a;
//        }
//        int left = reduce_max, right = sum, mid = (left + right) / 2;
//
//        while (left != right) {
//            if (isOK(nums, m, mid)) {
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
//    bool isOK(vector<int>& nums, int m, int sumNumber) {
//        int j = 0, cnt = 0, sum = 0;
//        //i����ţ�j���±�
//        for (; j < nums.size(); j++) {
//            if (sum + nums[j] > sumNumber) {
//                sum = nums[j];
//                cnt++;
//            }
//            else {
//                sum += nums[j];
//            }
//        }
//        if (cnt < m)return true;
//        return false;
//    }
//};
////ִ����ʱ��4 ms, ������ C++ �ύ�л�����76.01 % ���û�
////�ڴ����ģ�7 MB, ������ C++ �ύ�л�����63.64 % ���û�
//int main() {
//    vector<int> a = {2,3,1,1,1,1,1};
//    Solution solution;
//    cout<<solution.splitArray(a, 5);
//    return 0;
//}