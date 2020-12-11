#include<iostream>
#include<stack>
#include <algorithm>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int deal(char target, int i, string& senate, int size) {
        int j=i+1;
        for (; j < size; j++) {
            if (senate[j] == target) {
                senate[j] = 'X';
                return j;
            }
        }
     
		for (j = 0; j < i; j++) {
			if (senate[j] == target) {
				senate[j] = 'X';
                return j;
			}
         
        }
        return -1;
    }
    string predictPartyVictory(string senate) {
        int size = senate.size();
        while (true) {
            for (int i = 0; i < size; i++) {
                switch (senate[i]) {
                case 'R':
                    if (deal('D', i, senate, size) == -1)return "Radiant";
                    break;
                case 'D':
                    if (deal('R', i, senate, size) == -1)return "Dire";
                    break;
                default:
                    break;
                }
            }
        }
        return "Dire";
    }
    /*执行用时：124 ms, 在所有 C++ 提交中击败了12.17 % 的用户
        内存消耗：7.1 MB, 在所有 C++ 提交中击败了60.11 % 的用户*/
    string predictPartyVictory2(string senate) {
        int size = senate.size();
        queue<int> r, d;
        for (int i = 0; i < size; i++) {
            if (senate[i] == 'D')
                d.push(i);
            else
                r.push(i);
        }
        while (!r.empty() && !d.empty()) {
            if (r.front() < d.front())
                r.push(r.front() + size);
            else
                d.push(d.front() + size);
            r.pop();
            d.pop();
        }
        if(!r.empty())return "Radiant";
        return "Dire";
    }
   /* 执行用时：8 ms, 在所有 C++ 提交中击败了88.89 % 的用户
        内存消耗：8.2 MB, 在所有 C++ 提交中击败了11.17 % 的用户*/
};



int main() {
    Solution b;
    b.predictPartyVictory("DRRDRDRDRDDRDRDR");
    b.predictPartyVictory2("RDD");
}