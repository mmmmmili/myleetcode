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
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* first = new ListNode(0), * ptr = first, * ptr2;
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                ptr->next = new ListNode(l1->val);
//                ptr = ptr->next;
//                l1 = l1->next;
//            }
//            else {
//                ptr->next = new ListNode(l2->val);
//                ptr = ptr->next;
//                l2 = l2->next;
//            }
//
//        }
//        ptr2 = l1 ? l1 : l2;
//        while (ptr2) {
//            ptr->next = new ListNode(ptr2->val);
//            ptr = ptr->next;
//            ptr2 = ptr2->next;
//        }
//        return first->next;
//
//
//    }/*ִ����ʱ��16 ms, ������ C++ �ύ�л�����30.79 % ���û�
//        �ڴ����ģ�15.2 MB, ������ C++ �ύ�л�����5.37 % ���û�*/
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* first = new ListNode(0), * ptr = first;
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                ptr->next = l1;
//                ptr = ptr->next;
//                l1 = l1->next;
//            }
//            else {
//                ptr->next = l2;
//                ptr = ptr->next;
//                l2 = l2->next;
//            }
//
//        }
//        ptr->next = l1 ? l1 : l2;
//        return first->next;
//
//
//    }/*ִ����ʱ��8 ms, ������ C++ �ύ�л�����89.97 % ���û�
//        �ڴ����ģ�15 MB, ������ C++ �ύ�л�����5.37 % ���û�*/
//};