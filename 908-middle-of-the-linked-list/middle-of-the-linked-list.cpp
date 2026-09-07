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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // int count = 0;
        // while(temp != NULL){
        //     count++;
        //     temp = temp->next;
        // }
        // int mid = (count / 2) + 1;
        // count = 1;
        // temp = head;
        // while(count < mid){
        //     temp = temp->next;
        //     count++;
        // }
        // return temp;

        // solution 2
        ListNode* i = head;
        ListNode* j = head->next;
        if(head ->next == NULL){
            return head;
        }
        while(j->next != NULL && j->next->next != NULL){
            i = i -> next;
            j = j -> next -> next;
        }
        return i->next;
    }
};