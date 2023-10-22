def decode(str1):
  parts = str1.split('0')  # Split the string using zeros as separators
  first_name = parts[0]
  last_name = parts[1]
  id = parts[2]

  result = {
      "first_name": first_name,
      "last_name": last_name,
      "id": id
  }

  return result


str1 = str(input("Enter the string: "))
data = decode(str1)
print(data)

