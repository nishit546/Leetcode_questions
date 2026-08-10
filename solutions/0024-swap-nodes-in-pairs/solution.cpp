class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;

        ListNode* remaining = second->next;

        second->next = first;
        first->next = swapPairs(remaining);

        return second;
    }
};
