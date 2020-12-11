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
    /*ִ����ʱ��124 ms, ������ C++ �ύ�л�����12.17 % ���û�
        �ڴ����ģ�7.1 MB, ������ C++ �ύ�л�����60.11 % ���û�*/
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
   /* ִ����ʱ��8 ms, ������ C++ �ύ�л�����88.89 % ���û�
        �ڴ����ģ�8.2 MB, ������ C++ �ύ�л�����11.17 % ���û�*/
};



int main() {
    Solution b;
    b.predictPartyVictory("DRRDRDRDRDDRDRDR");
    b.predictPartyVictory2("RDD");
}