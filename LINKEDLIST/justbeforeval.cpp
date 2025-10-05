class Solution {
public:
    // Insert `val` before the first occurrence of value `X`.
    // If X is not found, return the list unchanged.
    ListNode* insertBeforeX(ListNode* &head, int X, int val) {
        if (head == NULL) return head;

        // If head itself is X, insert new head with `val`
        if (head->val == X) {
            head = new ListNode(val, head);
            return head;
        }

        // Find node just before the first occurrence of X
        ListNode* curr = head;
        while (curr->next != NULL && curr->next->val != X) {
            curr = curr->next;
        }

        // If found, insert `val` before that node
        if (curr->next != NULL) {
            curr->next = new ListNode(val, curr->next);
        }
        // else: X not found → no change

        return head;
    }
};
