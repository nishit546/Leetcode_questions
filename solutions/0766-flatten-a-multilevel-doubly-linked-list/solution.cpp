class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr)
            return head;

        stack<Node*> st;
        Node* temp = head;

        while (temp != nullptr) {

            if (temp->child != nullptr) {

                // Save the original next node
                if (temp->next != nullptr)
                    st.push(temp->next);

                // Connect child
                Node* child = temp->child;
                temp->next = child;
                child->prev = temp;

                // Remove child pointer
                temp->child = nullptr;
            }

            // If there is no next node, take from stack
            if (temp->next == nullptr && !st.empty()) {
                temp->next = st.top();
                st.pop();
                temp->next->prev = temp;
            }

            temp = temp->next;
        }

        return head;
    }
};
