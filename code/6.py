# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        p=head
        if(p==None or p.next==None):
            return False
        pAddress=[]
        while p!=None:
            if p not in pAddress:
                pAddress.append(p)
                p=p.next
            else:
                return True
        
        return False