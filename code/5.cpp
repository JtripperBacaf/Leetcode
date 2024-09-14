/**
 * Definition for singly-linked list.*/
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *thisNode1=head;
        ListNode *thisNode2=head;
        while(thisNode1!=NULL)
        {
            if(thisNode1->next !=NULL)
            {
                thisNode2=thisNode1->next;
            }
            else
            {
                break;
            }
            while(thisNode2!=NULL)
            {
                // thisNode2 reach the end
                if(thisNode2->val==thisNode1->val)
                    thisNode2=thisNode2->next;
                else
                    break;
            }
            thisNode1->next=thisNode2;
            thisNode1=thisNode1->next;
        }
        return head;
        
    }
};