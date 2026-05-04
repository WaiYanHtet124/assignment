def CheckInventory(fruit):
    def in_stock():
        for fruits,qty in fruit.items():
            if qty==0:
                print(f"{fruits} is out of stock")

            else: print(f"{fruits} is in stock")
    def restock():
         min_quantity=5
         for fruits,qty in fruit.items():
            if qty<min_quantity:
                print(f"{fruits} is out of stock")

            else: print(f"{fruits} is in stock.")

    def how_much_left():
        for fruits,qty in fruit.items():
            print(f"{fruits} : {qty}")

    return in_stock,restock,how_much_left
fruits={
    'apple':10,
    'banana':5,
    'orange':15,
    'grape':2,
    'watermelon':0,
    'kiwi':0
}
stock=CheckInventory(fruits)
check=list(stock)
print("\nChecking if items are in stock: ")
check[0]()
print("\nChecking if items need to be restocked:")
check[1]()
print("\nChecking how much left items: ")
check[2]()