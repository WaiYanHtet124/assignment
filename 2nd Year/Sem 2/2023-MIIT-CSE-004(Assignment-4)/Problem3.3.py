GuestList=["Albert Einstein","Marie Curie","Leonardo da Vinci"]
for guest in GuestList:
    print(f"Dear {guest}, I want you to come to dinner")

print("\n"+GuestList[1]+" can't come to dinner\n")
GuestList[1]="Nikola Tesla"
print("New Invitation:")
for guest in GuestList:
    print(f"Dear {guest}, you are invited to dinner")

#More space is available
GuestList.insert(0,"Ada Lovelace")
mid=len(GuestList)//2
GuestList.insert(mid,"Grace Hopper")
GuestList.append("Isaac Newton")
print("\nI invited \"more guests\" to dinner")
for guest in GuestList:
    print(f"Dear {guest}, you are invited to dinner")