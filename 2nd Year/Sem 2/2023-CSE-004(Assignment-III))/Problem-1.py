def bank_system():
    balance = 0
    account_number = None
    name = None

    def create_account():
        nonlocal balance, account_number, name
        name = input("Enter your name: ")
        balance = float(input("Enter initial deposit: "))
        account_number = "ACC123456789"
        print("Account created successfully!")
        print("Account Number:", account_number)

    def deposit():
        nonlocal balance
        amount = float(input("Enter deposit amount: "))
        balance += amount
        print(f"Deposit of {amount} successful.")
        print("New Balance:", balance)

    def withdraw():
        nonlocal balance
        amount = float(input("Enter withdraw amount: "))
        if amount <= balance:
            balance -= amount
            print(f"Withdrawal of {amount} successful.")
            print("New Balance:", balance)
        else:
            print("Insufficient balance!")

    def check_balance():
        print("Account Holder:", name)
        print("Account Number:", account_number)
        print("Balance:", balance)
    print("Welcome to Our Bank!")
    while True:
        print("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit")
        choice = input("Enter your choice(1/2/3/4/5): ")

        if choice == "1":
            create_account()
        elif choice == "2":
            deposit()
        elif choice == "3":
            withdraw()
        elif choice == "4":
            check_balance()
        elif choice == "5":
            break
        else:
            print("Invalid choice!")

bank_system()