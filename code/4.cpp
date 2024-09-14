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
        ListNode *dammyNode=new ListNode;   //reserve HeadNode
        ListNode *thisNode=dammyNode;
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                thisNode->next=list1;
                thisNode=thisNode->next;
                list1=list1->next;
            }
            else
            {
                thisNode->next=list2;
                thisNode=thisNode->next;
                list2=list2->next;
            }
        }

        //process remain List
        if(list1!=NULL)
        {
            thisNode->next=list1;
        }
        if(list2!=NULL)
        {
            thisNode->next=list2;
        }
        return dammyNode->next;
    }
};