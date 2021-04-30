#include<iostream>
#include<stack>
#include <algorithm>
#include<math.h>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        set<int> a;
        long long  ans = 0;
        for (int i = 0;i < size;i++) {
            if (a.find(nums[i]) == a.end()) {
                a.insert(nums[i]);
            }
            else {
                ans += nums[i];
            }

        }
        ans = ans / 2;
        long long temp = 0;
        for (int item : a) {
            temp += item;
        }


        return temp - ans;

    }
};



int main() {
    Solution b;

}