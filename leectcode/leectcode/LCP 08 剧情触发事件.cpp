//class Solution1 {
//public:
//    int translateNum(int num) {
//        stack<int> a;
//        while (num) {
//            int temp = num % 10;
//            num = num / 10;
//            a.push(temp);
//        }
//        vector<int> b;
//        while (!a.empty()) {
//            b.push_back(a.top());
//            a.pop();
//        }
//        int size = b.size();
//        vector<int> dp(size, 0);
//        for (int i = 0; i < size; i++) {
//            if (b[i] == 1 || b[i] == 2)//就不可能从他开始
//            {
//                if (i + 1 < 26) {
//                    if (b[i] == 1) {
//                        dp[i + 1]++;
//                    }
//                    else if (b[i] == 2 && b[i + 1] < 6) {
//                        dp[i + 1]++;
//                    }
//                }
//            }
//            dp[i]++;
//        }
//        return dp[size - 1];
//
//
//
//
//    }
//};
