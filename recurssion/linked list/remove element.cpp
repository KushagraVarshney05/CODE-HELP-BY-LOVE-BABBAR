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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp, *previous;
        temp=head;
        previous=temp;
        int flag=0;
        while(temp!=0)
        {

            if(temp->val==val)
            {
             if(temp==head)
             {
                head=head->next;
             }
             else
             {
                 previous->next=temp->next;
                 
             }
             flag=1;

            }
            if(flag=0)
            {
                previous=temp;
            }
            temp=temp->next;
            previous=0;
        }
        return head;
    }
};