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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1  &&  !list2)
        return list1;
        if(!list1)
        return list2;
        if(!list2)
        return list1;
        ListNode *temp1 = list1,*temp2 = list2,*merge,*ptr;
        if(temp1->val <= temp2->val)
        {
            merge = temp1;
            temp1 = temp1->next;
        }
        else
        {
            merge = temp2;
            temp2 = temp2->next;
        }
        ptr = merge;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val <= temp2->val)
            {
                merge->next = temp1;
                temp1 = temp1->next;
                merge = merge->next;
            }
            else
            {
                merge->next = temp2;
                merge = merge->next;
                temp2 = temp2->next;
            }
        }
        while(temp1!=NULL)
        {
            merge->next = temp1;
            break;
        }
        while(temp2!=NULL)
        {
            merge->next = temp2;
            break;
        }
        return ptr; 
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return NULL;
        if(lists.size()==1)
        return lists[0];
        ListNode *res = NULL;
        for(int i=0;i<lists.size();i++)
        {
            res = mergeTwoLists(res,lists[i]);
        }
        return res;

        
    }
};