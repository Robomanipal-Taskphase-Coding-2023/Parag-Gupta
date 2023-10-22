def dectobin(n):
    if n == 0:
      return 0
    else:
      return n%2 + 10*dectobin(n//2)
num = int(input("Enter a number: "))
print("The binary equivalent of", num, "is", dectobin(num))