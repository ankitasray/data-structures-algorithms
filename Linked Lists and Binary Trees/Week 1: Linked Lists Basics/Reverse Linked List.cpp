class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prevN = NULL, *nextN;
        if(head == NULL || head->next== NULL) return head;
            nextN = head->next;
            head->next = prevN;
            prevN= head;
            head = nextN;

        return prevN;
    }
};
