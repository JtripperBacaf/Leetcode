# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        HeadNode = ListNode()
        thisNode=HeadNode
        while(list1!=None and list2!=None):
            if(list1.val<list2.val):
                thisNode.next=list1
                thisNode=thisNode.next
                list1=list1.next
            else:
                thisNode.next=list2
                thisNode=thisNode.next
                list2=list2.next
        if(list1!=None):
            thisNode.next=list1
        if(list2!=None):
            thisNode.next=list2
        return HeadNode.next

        