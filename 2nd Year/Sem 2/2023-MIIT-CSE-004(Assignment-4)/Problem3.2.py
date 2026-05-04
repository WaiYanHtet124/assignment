GuestList=["Albert Einstein","Marie Curie","Leonardo da Vinci"]
for guest in GuestList:
    print(f"Dear {guest}, I want you to come to dinner")

print("\n"+GuestList[1]+" can't come to dinner\n")
GuestList[1]="Nikola Tesla"
print("New Invitation:")
for guest in GuestList:
    print(f"Dear {guest}, you are invited to dinner")