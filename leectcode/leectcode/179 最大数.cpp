////#include<algorithm>
////#include<iostream>
////#include<string>
////using namespace std;
//
////int main() {
////	Solution b;
////}
//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    //string largestNumber(vector<int> nums) {
//    //    sort(nums.begin(), nums.end(), [=](int a, int b) {
//    //        string a1 = to_string(a), b1 = to_string(b);
//    //        int i =0, j = 0;
//    //        int size1= a1.length(), size2 = b1.length();
//    //        while (i < size1 && j < size2) {
//    //            if (a1[i] < b1[j])return false;
//    //            else if (a1[i] > b1[j])return true;
//    //            else {
//    //                i++, j++;
//    //            }
//    //        }
//    //        if (size1 < size2)return true;
//    //        else return false;
//
//    //        });
//    //    string ans = "";
//    //    for (int item : nums) {
//    //        ans += to_string(item);
//    //    }
//    //    return ans;
//
//    //}
//    ////��һ�γ��ԣ��е�����̰�ķ��ѣ�ûͨ��
//
//    string largestNumber(vector<int> nums) {
//        int size = nums.size();
//        vector<vector<string>> dp(size, vector<string>(size));
//        //�����ѡλ����size��λ�ã��Ժ�����
//        //dp[i][j]
//        //��i������������j��λ�ã���ǰ��������ǰj-1�Ѿ�������
//        for (int i = 0;i < size;i++) {
//            dp[i][0] = to_string(nums[i]);
//       }
//        for (int j = 1;j < size;j++) {
//            for (int i = 1;i < size;i++) {
//                dp[]
//            }
//        }
//
//    }
//};
//int main() {
//	Solution b;
//    b.largestNumber({3,39,30 });
//}