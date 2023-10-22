arr = []
for i in range(int(input("Enter the number of elements in the list: "))):
    arr.append(int(input("Enter element: ")))
print (arr)    
arr.sort(reverse =True)
print (arr)
print("The second largest number in the list is ", arr[1] )
  
