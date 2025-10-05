/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    // 1-based insertion: K == 1 inserts at head.
    // If K > length+1, it appends to the end.
    ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
        ListNode* newnode = new ListNode(X);

        // Treat K <= 1 as insert at head (handles K==1 and any invalid <=0)
        if (head == NULL || K <= 1) {
            newnode->next = head;
            head = newnode;
            return head;
        }

        // Move to node at position (K-1), or stop at last node if shorter
        ListNode* prev = head;
        int pos = 1; // prev is at position 1
        while (prev->next != NULL && pos < K - 1) {
            prev = prev->next;
            ++pos;
        }

        // Insert after 'prev' (append if we're at the end)
        newnode->next = prev->next;
        prev->next = newnode;

        return head;
    }
};
