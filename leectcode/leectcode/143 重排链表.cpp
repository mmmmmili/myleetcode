//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return;
//        stack< ListNode*> tempStack;
//        ListNode* ptr1 = head, * ptr2 = nullptr;
//        while (ptr1 != nullptr) {
//            tempStack.push(ptr1);
//            ptr1 = ptr1->next;
//        }
//        ptr1 = head;
//        ptr2 = tempStack.top();
//        while (ptr1 != ptr2 && ptr2->next != ptr1&&ptr1!=nullptr) {
//            tempStack.pop();
//            tempStack.top()->next = NULL;
//            ptr2->next = ptr1->next;
//            ptr1->next = ptr2;   
//
//            ptr1 = ptr1->next->next;
//            ptr2 = tempStack.top();  
//        }
//        return;
//    }
//    /*ִ����ʱ��84 ms, ������ C++ �ύ�л�����13.09 % ���û�
//        �ڴ����ģ�18.4 MB, ������ C++ �ύ�л�����7.57 % ���û�*/
//    
//};
//int main() {
//    Solution b;
//    ListNode* a = new ListNode(3);
//    a->next = new ListNode(4);
//    a->next->next = new ListNode(5);
//    a->next->next->next = new ListNode(6);
//    b.reorderList(a);
//}