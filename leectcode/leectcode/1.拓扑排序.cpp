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
//        for (int i = 0;i < n;i++) //���Ϊ�㶥���ջ
//            if (c[i] == 0)
//            {
//                c[i] = top;
//                top = i;
//            }
//
//        for (int i = 0; i < size; i++) //�������n������
//            if (top == -1) { //��;ջ��,ת��
//                cout <<  "meijiuledengsiba!" << endl;
//                    return;
//            }
//            else { //������������
//                int j = top;
//                top = c[top]; //��ջ
//                cout << j << endl; //���
//                Edge<float>* l = NodeTable[j].adj;
//                while (l) {//ɨ��ö���ĳ��߱�
//                    int k = l��dest;
//                    //��һ����
//                    if (--c[k] == 0)
//                        //�ö�����ȼ�һ
//                    {
//                        c[k] = top;top = k;
//                    }
//                    //������
//                    l = l��link
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