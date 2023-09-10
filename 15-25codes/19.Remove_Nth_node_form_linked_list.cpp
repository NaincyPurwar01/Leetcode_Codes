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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
        return head;
        ListNode * temp = head,*temp1;
        int count = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        int position =  count - n+1;
        int i = 1;
        cout<<count<<"\t"<<position;
        if(head->next == NULL && position ==1)
        {
            head = NULL;
        }
        else if(head->next!=NULL && position == 1)
        {
            head = head->next;
        }
        else
        {
            temp = head;
            while(i!=(position-1) && (temp->next)!=NULL)
            {
                temp1 = temp;
                temp = temp->next;
                i++;
            }
            if(temp->next == NULL)
            {
                temp->next = NULL;
            }
            else
            {
                temp->next = temp->next->next;
            }
        }
        return head;

        
    }
};