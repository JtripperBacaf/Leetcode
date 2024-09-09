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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // Dummy node to simplify handling of head
        ListNode* p = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry; // Start with the carry from the previous addition

            if (l1 != nullptr) {
                sum += l1->val; // Add value from the first list
                l1 = l1->next; // Move to the next node in the first list
            }

            if (l2 != nullptr) {
                sum += l2->val; // Add value from the second list
                l2 = l2->next; // Move to the next node in the second list
            }

            carry = sum / 10; // Calculate carry for the next node
            p->next = new ListNode(sum % 10); // Create a new node with the current digit
            p = p->next; // Move to the newly created node
        }

        return dummyHead->next; // Return the next node to skip the dummy node
    }
};