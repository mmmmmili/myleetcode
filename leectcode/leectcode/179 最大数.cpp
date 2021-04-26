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
//    ////第一次尝试，有点属于贪心法把，没通过
//
//    string largestNumber(vector<int> nums) {
//        int size = nums.size();
//        vector<vector<string>> dp(size, vector<string>(size));
//        //这个是选位法，size个位置，对号入座
//        //dp[i][j]
//        //第i个数字坐到第j个位置（从前往后坐，前j-1已经坐满了
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