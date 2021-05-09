//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<set>
//using namespace std;
//class Solution {
//public:
//    int minimumTimeRequired(vector<int>& jobs, int k) {
//        sort(jobs.begin(), jobs.end());
//        stack<int> job;
//        int maxNum = INT_MIN, sum = 0;
//        for (int item : jobs) {
//            maxNum = max(maxNum, item);
//            sum += item;
//            job.push(item);
//        }
//        int mid = 0;
//        while (maxNum < sum) {
//            mid = (maxNum + sum) / 2;
//            if (isOK(job, k, mid)) {
//                sum = mid;
//            }
//            else {
//                maxNum = mid + 1;
//            }
//        }
//        return sum;
//
//
//    }
//
//    bool canPartitionKSubsets(stack<int>& job, vector<int>& groups, int ans, int k) {
//        if (job.empty())return true;
//        int tempJob = job.top();
//        job.pop();
//        for (int i = 0; i < k; i++) {
//            if (groups[i] + tempJob <= ans) {
//                groups[i] = groups[i] + tempJob;
//                if (canPartitionKSubsets(job, groups, ans, k)) {
//                    job.push(tempJob);
//                    return true;
//                }
//                groups[i] = groups[i] - tempJob;
//            }
//            //�ѹ����������i����ʧ��
//            if (groups[i] == 0) {
//                break;
//            }//////////////////////�����֦����Ҫ
//        }
//        job.push(tempJob);
//        return false;
//
//
//    }
//    bool isOK(stack<int>& job, int k, int ans) {
//        vector<int> groups(k, 0);
//        return canPartitionKSubsets(job, groups, ans, k);
//    }
//    /*ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�7.3 MB, ������ C++ �ύ�л�����61.83 % ���û�*/
//};
//
//
//
//
//
//int main() {
//    Solution b;
//    vector<int>temp1 = { 1,2,4,7,8 };
//    b.minimumTimeRequired(temp1, 2);
//}