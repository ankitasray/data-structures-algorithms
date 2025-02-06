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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *nextn;
        ListNode* tmp=head;
        int i=0;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            i++;
        }
        if(i<k)
        {
           return head; 
        }
        int cnt=0;
        while(curr!= NULL && cnt<k){
            nextn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextn;
            cnt++;
        }
        if(nextn!=NULL){
            head->next= reverseKGroup(nextn,k);
        }
        return prev;
        
    }
};
