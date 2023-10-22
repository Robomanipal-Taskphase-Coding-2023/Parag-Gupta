inventory = {}
def add_item(item, quantity):
    if item in inventory:
        inventory[item] += quantity
    else:
        inventory[item] = quantity
def remove_item(item, quantity):
    if item in inventory:
        if inventory[item] >= quantity:
            inventory[item] -= quantity
        else:
            print("Not enough inventory")
    else:
        print("Item not in inventory")
def display_inventory():
    for item, quantity in inventory.items():
        print(f"{item}: {quantity}")
def display_menu():
    print("1. Add item")
    print("2. Remove item")
    print("3. Display inventory")
  
while True:
    display_menu()  
    choice = input("Enter your choice: ")
    if choice == "1":
        item = input("Enter item name: ")
        quantity = int(input("Enter quantity: "))
        add_item(item, quantity)
    elif choice == "2":
        item = input("Enter item name: ")
        quantity = int(input("Enter quantity: "))
        remove_item(item, quantity)
    elif choice == "3":
        display_inventory()
    else:
        print("Invalid choice")
   
  