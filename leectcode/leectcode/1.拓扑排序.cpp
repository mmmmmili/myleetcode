//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//class Solution {
//   /* 5 4
//        1 2
//        1 3
//        2 4
//        3 4*/
//    void fun(vector<vector<int>>& temp,int n) {
//        int size = temp.size();
//        vector<int> c(size,0);
//        
//        for (int i = 0;i < size;i++) {
//            c[temp[i][1]]++;
//        }
//        int top = -1;
//        for (int i = 0;i < n;i++) //入度为零顶点进栈
//            if (c[i] == 0)
//            {
//                c[i] = top;
//                top = i;
//            }
//
//        for (int i = 0; i < size; i++) //期望输出n个顶点
//            if (top == -1) { //中途栈空,转出
//                cout <<  "meijiuledengsiba!" << endl;
//                    return;
//            }
//            else { //继续拓扑排序
//                int j = top;
//                top = c[top]; //退栈
//                cout << j << endl; //输出
//                Edge<float>* l = NodeTable[j].adj;
//                while (l) {//扫描该顶点的出边表
//                    int k = l→dest;
//                    //另一顶点
//                    if (--c[k] == 0)
//                        //该顶点入度减一
//                    {
//                        c[k] = top;top = k;
//                    }
//                    //减至零
//                    l = l→link
//                        ;
//                }
//            }
//        int top = -1;
//        cout<<"unique";
//        cout << "not unique";
//        cout << "meijiuledengsiba!";
//    }
//};
//
//
//int main() {
//    Solution b;
//    int m, n,a,c;
//    
//    cin >> m >> n;
//    vector<vector<int>> temp(n,vector<int>(2,0));
//    for (int i = 0;i < n;i++) {
//        cin >> temp[i][0] >> temp[i][1];
//    }
//    
//
//}