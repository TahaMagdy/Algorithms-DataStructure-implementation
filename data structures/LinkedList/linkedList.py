#!/usr/local/bin/python3
"""Educational; Just for fun.

   1 Creating the linked list ADT
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
        self.len = 0

    # LinkedList Operations
    def append(self, element):
        # Getting the head
        currentNode = self.head

        # if the head if None
        if currentNode.data == None:
            currentNode.data = element
            self.len += 1
            return

        # Moving over the next nodes
        while currentNode.next != None:
            currentNode = currentNode.next
        # Appending the new element to the last node's next.
        currentNode.next = Node(element)
        self.len += 1


    def getByIndex(self, index):
        currentNode = self.head

        if index > self.len-1:
            print("out of index range")
        else:
            currentNode = self.head
            for x in range(index):
                currentNode = currentNode.next
            return currentNode.data


    def traverse(self, function):
        currentNode = self.head

        # If the head is None; get out
        if currentNode.data == None:
            return

        while currentNode.next != None:
            currentNode.data = function(currentNode.data)
            currentNode = currentNode.next
        currentNode.data = function(currentNode.data)


    def length(self):
        return self.len


    def printElements(self):
        # Getting the head
        currentNode = self.head

        while currentNode.next != None:
            print(currentNode.data, end=' ')
            currentNode = currentNode.next
        print(currentNode.data)


def mult10(number):
    return number * 10
"""Testing"""
if __name__ == "__main__":
    myList = LinkedList()
    myList.append(12)
    myList.append(13)
    myList.append(14)
    myList.append(15)
    myList.append(13)
    myList.printElements()
    print("Length = " + str(myList.length()))
    print("Index = " + str(myList.getByIndex(4)))

    myList.traverse(mult10)
    myList.printElements()
