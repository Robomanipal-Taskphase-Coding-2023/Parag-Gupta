from itertools import permutations
str=input("Enter the string: ")
str = str.split()
words=permutations(str)
print ("The possible combinations are:")
for i in words:
    sentence = ' '.join(i)
    print(sentence)