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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set<int> mySet(nums.begin(),nums.end());
       ListNode* newNode = new ListNode(0);
       newNode->next = head;
        ListNode* current = newNode;
        while(current->next != nullptr){
            if(mySet.count(current->next->val)){
                ListNode* temp = current->next;
                current->next = current->next->next;

            }
            else{
                current = current->next;
            }
        }
        ListNode* ans = newNode->next;
        delete newNode;
        return ans;
    }
};
