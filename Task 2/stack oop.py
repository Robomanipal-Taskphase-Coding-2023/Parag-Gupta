class Stack:
    def __init__(self):
        self.elements = []

    def is_empty_(self):
        return len(self.elements) == 0

    def push_(self, item):
        self.elements.append(item)

    def pop_(self):
        if not self.is_empty_():
            return self.elements.pop()
        else:
            print("Stack is empty")

    def peek_(self):
        if not self.is_empty_():
            return self.elements[-1]
        else:
            print("Stack is empty")

    def size_(self):
        return len(self.elements)

x = Stack()
x.push_(14)
x.push_(90)
x.push_(72)
x.push(30)
x.pop_()
x.peek_()
x.size_()
