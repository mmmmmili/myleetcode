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
       /* ִ����ʱ��4 ms, ������ C++ �ύ�л�����35.38 % ���û�
            �ڴ����ģ�6.9 MB, ������ C++ �ύ�л�����12.03 % ���û�*/
    }
};


int main() {
    Solution b;

}