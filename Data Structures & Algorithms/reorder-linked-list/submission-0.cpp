/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* middle = head;
        ListNode* end = head->next;
        //cut the list in half
        while(end != nullptr&&end->next!= nullptr){
            middle = middle->next;
            end = end->next->next;
        }

        //reverse the second half
        ListNode* prev = nullptr;
        ListNode* curr = middle;
        while(curr!=nullptr){
            ListNode* next = curr->next;
            ListNode* temp = next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        //prev is now the head of the reverse second half of the list
        //merge the two lists
        ListNode* l1 = head;
        ListNode* l2 = prev;

        while(l1!=nullptr && l2!=nullptr){
            ListNode*temp1 = l1->next;
            ListNode*temp2 = l2->next;
            l1->next = l2;
            l2->next= temp1;
            l2 = temp2;
            l1 = temp1;
        }
    }
};
