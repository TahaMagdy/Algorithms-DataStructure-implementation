#!/usr/local/bin/python3
"""1 Creating the linked list ADT
   2 Creating its operations
   3 Testing
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    # LinkedList definition
    def __init__(self):
        self.head = Node(data=None)

    # LinkedList Operations
    def append(self, element):
        # Getting the head
        currentNode = self.head
        # Moving over the next nodes
        while currentNode.next != None:
            currentNode = currentNode.next
        # Appending the new element to the last node's next.
        currentNode.next = Node(element)

    def getByIndex(self, index):
        pass

    def traverse(self, function):
        pass

    def printElements(self):
        pass

"""Testing"""
if __name__ == "__main__":
    myList = LinkedList()
    myList.append(12)
    myList.append(13)
