# Circular Singly Linked List:
class Node:
    def __init__(self, value=None):
        self.value = value
        self.next = None


class CircularSinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def __iter__(self):
        node = self.head
        while node:
            yield node
            node = node.next
            if node == self.tail.next:
                break

    # Creation of Circular Singly Linked List:
    def createCSLL(self, nodeValue):
        node = Node(nodeValue)
        node.next = node
        self.head = node
        self.tail = node
        return "The CSLL has been created."

    # Insertion of Circular Singly Linked List:
    def insertCSLL(self, value, location):
        if self.head is None:
            return "The CSLL doesn't exist."
        else:
            newNode = Node(value)
            if location == 0:
                newNode.next = self.head
                self.head = newNode
                self.tail.next = newNode
            elif location == -1:
                newNode.next = self.tail.next
                self.tail.next = newNode
                self.tail = newNode
            else:
                tempNode = self.head
                index = 0
                while index < location - 1:
                    tempNode = tempNode.next
                    index += 1
                nextNode = tempNode.next
                tempNode.next = newNode
                newNode.next = nextNode
            return "The node has been successfully inserted."

    # Traversal of Circular Singly Linked List:
    def traversalCSLL(self):

        if self.head is None:
            return "There's no element for traversal."
        else:
            tempNode = self.head
            while tempNode:
                print(tempNode.value)
                tempNode = tempNode.next
                if tempNode == self.tail.next:
                    break

    # Searching of Circular Singly Linked List:
    def searchCSLL(self, nodeValue):
        if self.head is None:
            return "There's no element for searching."
        else:
            tempNode = self.head
            while tempNode:
                if tempNode.value == nodeValue:
                    return tempNode.value
                tempNode = tempNode.next
                if tempNode == self.tail.next:
                    return "The node doesn't exist."

    # Deletion of Circular Singly Linked List:
    def deleteNode(self, location):
        if self.head is None:
            print("There's no element for searching.")
        else:
            if location == 0:
                if self.head == self.tail:
                    self.head.next = None
                    self.head = None
                    self.tail = None
                else:
                    self.head = self.head.next
                    self.tail.next = self.head
            elif location == -1:
                if self.head == self.tail:
                    self.head.next = None
                    self.head = None
                    self.tail = None
                else:
                    node = self.head
                    while node is not None:
                        if node.next == self.tail:
                            break
                        node = node.next
                    node.next = self.head
                    self.tail = node
            else:
                tempNode = self.head
                index = 0
                while index < location - 1:
                    tempNode = tempNode.next
                    index += 1
                nextNode = tempNode.next
                tempNode.next = nextNode.next

    # Deletion of Entire Circular Singly Linked List:
    def deleteEntireCSLL(self):
        self.head = None
        self.tail.next = None
        self.tail = None


circularSLL = CircularSinglyLinkedList()
circularSLL.createCSLL(1)

circularSLL.insertCSLL(0, 0)
circularSLL.insertCSLL(4, -1)
circularSLL.insertCSLL(3, -1)
circularSLL.insertCSLL(2, 2)
circularSLL.insertCSLL(1, 1)
print([node.value for node in circularSLL])

circularSLL.deleteEntireCSLL()
print([node.value for node in circularSLL])


# Doubly Linked List:

class Node:
    def __init__(self, value=None):
        self.value = value
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def __iter__(self):
        node = self.head
        while node:
            yield node
            node = node.next

    # Creation of Doubly Linked List:
    def createDLL(self, nodeValue):
        node = Node(nodeValue)
        node.prev = None
        node.next = None
        self.head = node
        self.tail = node
        return "The Doubly Linked List has been created successfully."

    # Insertion of Doubly Linked List:
    def insertNode(self, nodeValue, location):
        if self.head is None:
            print("The DLL doesn't exist.")
        else:
            newNode = Node(nodeValue)
            if location == 0:
                newNode.prev = None
                newNode.next = self.head
                self.head = newNode
                self.head.prev = newNode
            elif location == -1:
                newNode.next = None
                newNode.prev = self.tail
                self.tail.next = newNode
                self.tail = newNode
            else:
                tempNode = self.head
                index = 0
                while index < location - 1:
                    tempNode = tempNode.next
                    index += 1
                newNode.next = tempNode.next
                newNode.prev = tempNode
                newNode.next.prev = newNode
                tempNode.next = newNode

    # Traversal of Doubly Linked List:
    def traverseDLL(self):
        if self.head is None:
            print("There's is no any element to traverse.")
        else:
            tempNode = self.head
            while tempNode:
                print(tempNode.value)
                tempNode = tempNode.next

    # # Reverse Traversal of Doubly Linked List:
    # def reverseTraversalDLL(self):
    #     if self.head is None:
    #         print("There's is no any element to reverse traverse.")
    #     else:
    #         tempNode = self.tail
    #         while tempNode:
    #             print(tempNode.value)
    #             tempNode = tempNode.prev

    # Search of a node Doubly Linked List:
    def searchDLL(self, nodeValue):
        if self.head is None:
            print("There's is no any element to search.")
        else:
            tempNode = self.head
            while tempNode:
                if tempNode.value == nodeValue:
                    return tempNode.value
                tempNode = tempNode.next
            return "There is no such element."

    # Deletion of a node Doubly Linked List:
    def deleteNode(self, location):
        if self.head is None:
            print("There's is no any element in DLL.")
        else:
            if location == 0:
                if self.head == self.tail:
                    self.head = None
                    self.tail = None
                else:
                    self.head = self.head.next
                    self.head.prev = None
            elif location == -1:
                if self.head == self.tail:
                    self.head = None
                    self.tail = None
                else:
                    self.tail = self.tail.prev
                    self.tail.next = None
            else:
                currentNode = self.head
                index = 0
                while index < location - 1:
                    currentNode = currentNode.next
                    index += 1
                currentNode.next = currentNode.next.next
                currentNode.next.prev = currentNode
            print("The node has been successfully deleted.")

    # Deletion of entire node in Doubly Linked List:
    def deleteEntireDLL(self):
        if self.head is None:
            return "There's is no any element in DLL"
        else:
            tempNode = self.head
            while tempNode:
                tempNode.prev = None
                tempNode = tempNode.next
            self.head = None
            self.tail = None
            return "The DLL has been successfully deleted."


doublyLL = DoublyLinkedList()
doublyLL.createDLL(2)

print([node.value for node in doublyLL])

doublyLL.insertNode(0, 0)
doublyLL.insertNode(1, 1)
doublyLL.insertNode(2, 1)
doublyLL.insertNode(3, 2)
doublyLL.insertNode(7, -1)
doublyLL.insertNode(6, -1)

print([node.value for node in doublyLL])

doublyLL.traverseDLL()

# doublyLL.reverseTraversalDLL()

print(doublyLL.searchDLL(9))

doublyLL.deleteNode(0)
doublyLL.deleteNode(-1)
doublyLL.deleteNode(3)
print([node.value for node in doublyLL])


# Circular Doubly Linked List:
class Node:
    def __init__(self, value=None):
        self.value = value
        self.prev = None
        self.next = None


class CircularDoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def __iter__(self):
        node = self.head
        while node:
            yield node
            node = node.next
            if node == self.tail.next:
                break

    # Creation of Circular Doubly Linked List:
    def createCDLL(self, nodeValue):
        newNode = Node(nodeValue)
        self.head = newNode
        self.tail = newNode
        newNode.prev = newNode
        newNode.next = newNode
        return "The Circular Doubly Linked List has created successfully."

    # Insertion of Circular Doubly Linked List:
    def insertCDLL(self, value, location):
        if self.head is None:
            print("The Circular Doubly Linked List doesn't exist.")
        else:
            newNode = Node(value)
            if location == 0:
                newNode.next = self.head
                newNode.prev = self.tail
                self.head.prev = newNode
                self.head = newNode
                self.tail.next = newNode
            elif location == -1:
                newNode.next = self.head
                newNode.prev = self.tail
                self.head.prev = newNode
                self.tail.next = newNode
                self.tail = newNode
            else:
                tempNode = self.head
                index = 0
                while index < location - 1:
                    tempNode = tempNode.next
                    index += 1
                newNode.next = tempNode.next
                newNode.prev = tempNode
                newNode.next.prev = newNode
                tempNode.next = newNode
            return "The node has been successfully inserted."

    # Traversal of Circular Doubly Linked List:
    def traversalCDLL(self):
        if self.head is None:
            print("There is not any node to traverse.")
        else:
            tempNode = self.head
            while tempNode:
                print(tempNode.value)
                if tempNode == self.tail:
                    break
                tempNode = tempNode.next

    # Reverse Traversal of Circular Doubly Linked List:
    def reverseTraversalCDLL(self):
        if self.head is None:
            print("There is not any node to traverse.")
        else:
            tempNode = self.tail
            while tempNode:
                print(tempNode.value)
                if tempNode == self.head:
                    break
                tempNode = tempNode.prev

    # Search of a node in Circular Doubly Linked List:
    def searchCDLL(self, nodeValue):
        if self.head is None:
            return "There is not any node to search."
        else:
            tempNode = self.head
            while tempNode:
                if tempNode.value == nodeValue:
                    return nodeValue
                if tempNode == self.tail:
                    return "There is no such node."
                tempNode = tempNode.next

    # Deletion of a node in Circular Doubly Linked List:
    def deleteNode(self, location):
        if self.head is None:
            return "There's is no any element in CDLL."
        else:
            if location == 0:
                if self.head == self.tail:
                    self.head.prev = None
                    self.head.next = None
                    self.head = None
                    self.tail = None
                else:
                    self.head = self.head.next
                    self.head.prev = self.tail
                    self.tail.next = self.head
            elif location == -1:
                if self.head == self.tail:
                    self.head.prev = None
                    self.head.next = None
                    self.head = None
                    self.tail = None
                else:
                    self.tail = self.tail.prev
                    self.tail.next = self.head
                    self.head.prev = self.tail
            else:
                curNode = self.head
                index = 0
                while index < location-1:
                    curNode = curNode.next
                    index += 1
                curNode.next = curNode.next.next
                curNode.next.prev = curNode
            return "The node has successfully deleted."

    # Deletion of a node in Circular Doubly Linked List:
    def deleteCDLL(self):
        if self.head is None:
            return "There's is no any element in CDLL."
        else:
            self.tail.next = None
            tempNode = self.head
            while tempNode:
                tempNode.prev = None
                tempNode = tempNode.next
            self.head = None
            self.tail = None
            return "The CDLL has successfully deleted."


circularDLL = CircularDoublyLinkedList()
circularDLL.createCDLL(2)
circularDLL.insertCDLL(0, 0)
circularDLL.insertCDLL(5, -1)
circularDLL.insertCDLL(3, 2)
circularDLL.insertCDLL(4, 3)

print([node.value for node in circularDLL])
