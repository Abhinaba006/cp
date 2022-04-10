class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def revHalfLL(head):
    
    #travraverse the list half
    for i in range(1, n//2):
        head = head.next
    lastNode = head
    #reverse the list
    prev = None
    curr = head.next
    while curr:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    # connect the last node to the head of the reversed list
    lastNode.next = prev

def printList(head):
    while head:
        print(head.data, end=' ')
        head = head.next
    print()

if __name__ == '__main__':
    # Create a linked list
    llist = Node(1)
    llist.next = Node(2)
    llist.next.next = Node(3)
    llist.next.next.next = Node(4)
    llist.next.next.next.next = Node(5)
    llist.next.next.next.next.next = Node(6)
    # size of the liniked list is 2*3
    n = 6
    printList(llist)
    revHalfLL(llist, n)
    printList(llist)