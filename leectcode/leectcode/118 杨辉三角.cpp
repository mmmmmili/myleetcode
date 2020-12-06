#include<iostream>
#include<stack>
#include <algorithm>
#include<math.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        if (numRows == 0)return ans;
        ans[0] = { 1 };
        int temp = 0;
        for (int i = 1; i < numRows; i++) {
            temp = 0;
            for (int j = 0; j < i; j++) {
                ans[i].push_back(temp + ans[i - 1][j]);
                temp = ans[i - 1][j];
            }
            ans[i].push_back(temp);
        }
        return ans;
       /* 执行用时：4 ms, 在所有 C++ 提交中击败了35.38 % 的用户
            内存消耗：6.9 MB, 在所有 C++ 提交中击败了12.03 % 的用户*/
    }
};


int main() {
    Solution b;

}