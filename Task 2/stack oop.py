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

# Example usage:
stack = Stack()
stack.push_(1)
stack.push_(2)
stack.push_(3)

print(stack.pop_())  # Output: 3 (LIFO)
print(stack.peek_())  # Output: 2 (Top of the stack)
print(stack.size_())  # Output: 2 (Number of elements in the stack)
