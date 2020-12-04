//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//  
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//    ListNode* oddEvenList(ListNode* head) {
//       
//        if (!head||!head->next)return head;
//        ListNode*a=head,* b = head->next, * temp;
//        
//        while (a && b && b->next) {
//            temp = b->next;
//            b->next = temp->next;
//            temp->next = a->next;
//            a->next = temp;
//
//            a = a->next;
//            b = b->next;
//
//        }
//        return head;
//    }
//    /*执行用时：28 ms, 在所有 C++ 提交中击败了8.64 % 的用户
//        内存消耗：10.8 MB, 在所有 C++ 提交中击败了5.24 % 的用户*/
//    
//};
//
//int main() {
//    Solution b;
//
//}