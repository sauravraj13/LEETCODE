
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

import heapq
from typing import List, Optional

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists:
            return None

        
        min_heap = []
        
        
        for list_node in lists:
            if list_node:
                
                heapq.heappush(min_heap, (list_node.val, id(list_node), list_node))

        dummy = ListNode(0)  
        current = dummy

        
        while min_heap:
            
            _, _, smallest_node = heapq.heappop(min_heap)
            current.next = smallest_node  
            
            current = current.next  
            
            if smallest_node.next:
                heapq.heappush(min_heap, (smallest_node.next.val, id(smallest_node.next), smallest_node.next))

        return dummy.next  
        
