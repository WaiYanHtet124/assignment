GuestList=['Ada Lovelace','Albert Einstein','Grace Hopper','Nikola Tesla','Leonardo da Vinci','Issac Newton']
print("Sorry, I have space for only two guests")
while len(GuestList)>2:
    cancel=GuestList.pop()
    print(f"Sorry {cancel}! I have to cancel the invitation")

print("\nFortunately, I have two guests")
for guest in GuestList:
    print(f"Dear {guest}, you are still invited to dinner")