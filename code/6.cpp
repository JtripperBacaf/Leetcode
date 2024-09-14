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
    bool hasCycle(ListNode *head) {
        ListNode *p=head;
        if(p==NULL||p->next==NULL)
            return false;
        std::vector<ListNode *> Nodeaddress;
        while(p!=NULL)
        {
            if(std::find(Nodeaddress.begin(), Nodeaddress.end(), p)!=Nodeaddress.end())
                return true;
            Nodeaddress.push_back(p);
            p=p->next;
        }
        return false;
    }
};