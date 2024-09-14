/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::vector<ListNode*> pAvec;
        ListNode * pA=headA;
        ListNode * pB=headB;
        if(pA==NULL || pB==NULL)
            return NULL;
        while(pA!=NULL)
        {
            // add pA to the vec
            pAvec.push_back(pA);
            pA=pA->next;
        }
        while(pB!=NULL)
        {
            if(std::find(pAvec.begin(),pAvec.end(),pB)!=pAvec.end())
            {
                //find the intersection
                return pB;
            }
            pB=pB->next;
        }
        return NULL;
    }
};